#include "../includes/ft.h"

int	min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

void	ft_justprintit(char **map, t_map bus)
{
	int	i;
	int	j;
	int	k;

	bus.maxi++;
	k = ft_strlen(map[0]);
	i = 1;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if ((i > bus.maxi - bus.max) && (i < bus.maxi + 1)
				&& (j > bus.maxj - bus.max) && (j < bus.maxj + 1))
				ft_putchar(map[0][k - 1]);
			else
				ft_putchar(map[i][j]);
			j++;
		}
		ft_putchar('\n');
		free(map[i]);
		i++;
	}
	free(map[0]);
	free(map);
}

void	ft_justdoit(char **map, int **intmap, t_map bus)
{
	int	i;
	int	j;

	i = 0;
	while (i < bus.n)
	{
		j = 0;
		while (j < bus.m)
		{
			if ((intmap[i][j] != 0) && (i != 0) && (j != 0))
				intmap[i][j] = min(intmap[i - 1][j - 1],
						min(intmap[i][j - 1], intmap[i - 1][j])) + 1;
			if (intmap[i][j] > bus.max)
			{
				bus.max = intmap[i][j];
				bus.maxi = i;
				bus.maxj = j;
			}
			j++;
		}
		free(intmap[i]);
		i++;
	}
	ft_justprintit(map, bus);
	free(intmap);
}

void	ft_action(char **map, char *argv, t_map	bus)
{
	int	i;

	map = ft_get_map_from_file(argv, &bus);
	if (map == NULL)
		return ;
	if (ft_checkmap(map) == 0)
	{
		ft_putstr("map error\n");
		i = 1;
		while (map[i])
		{
			free(map[i]);
			i++;
		}
		free(map[0]);
		free(map);
		return ;
	}
	else
	{
		ft_justdoit(map, ft_get_int_map(map), bus);
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	**map;
	t_map	bus;

	bus.n = 0;
	bus.m = 0;
	bus.maxi = 0;
	bus.maxj = 0;
	bus.max = 0;
	map = NULL;
	i = 0;
	if (argc == 1)
		ft_action(map, ft_get_input_map(), bus);
	else
	{
		while (i < argc - 1)
		{
			i++;
			ft_action(map, argv[i], bus);
		}
	}
	return (0);
}
