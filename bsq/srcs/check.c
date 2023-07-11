#include "../includes/ft.h"

int	ft_checkall(char **map, int n, int m, int k)
{
	int	i;
	int	j;

	n++;
	i = 1;
	while (i < n)
	{
		if (ft_strlen(map[i]) != m)
			return (0);
		j = 0;
		while (j < m)
		{
			if (!((map[i][j] == map[0][k - 2]) || (map[i][j] == map[0][k - 3])))
				return (0);
			j++;
		}
		i++;
	}
	j = 0;
	return (1);
}

int	ft_error(char **map, int n, int m, int k)
{
	if (ft_microatoi(map[0]) != n)
		return (0);
	if ((!(ft_str_is_printable(&map[0][k - 3])))
		|| (map[0][k - 1] == map[0][k - 2])
		|| (map[0][k - 1] == map[0][k - 3])
		|| (map[0][k - 2] == map[0][k - 3]))
		return (0);
	if (ft_checkall(map, n, m, k) == 0)
		return (0);
	return (1);
}

int	ft_checkmap(char **map)
{
	int	n;
	int	m;
	int	k;

	k = ft_strlen(map[0]);
	ft_find_proportions(map, &m, &n);
	n--;
	if (ft_error(map, n, m, k) == 0)
		return (0);
	return (1);
}
