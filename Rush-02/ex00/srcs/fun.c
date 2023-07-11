#include "../includes/ft.h"

void	funone(char *indict, char *argv, char *temp, char *rank)
{
	char	*end;
	int		i;

	i = ft_strlen(argv) - 3;
	temp[0] = '0';
	temp[1] = '0';
	temp[2] = argv[1];
	lowthous(indict, temp, 1);
	if (i < 3)
		i = 3;
	end = ft_onestrstr(indict, &rank[39 - i]);
	ft_print(end, 1);
}

void	funtwo(char *indict, char *argv, char *temp, char *rank)
{
	char	*end;
	int		i;

	i = ft_strlen(argv) - 3;
	temp[0] = '0';
	temp[1] = argv[0];
	temp[2] = argv[1];
	lowthous(indict, temp, 1);
	if (i < 3)
		i = 3;
	end = ft_onestrstr(indict, &rank[39 - i]);
	ft_print(end, 1);
}

void	funthree(char *indict, char *argv, char *temp, char *rank)
{
	char	*end;
	int		i;

	i = ft_strlen(argv) - 3;
	temp[0] = argv[0];
	temp[1] = argv[1];
	temp[2] = argv[2];
	if ((temp[0] == '0') && (temp[1] == '0') && (temp[2] == '0'))
	{
		argv += 3;
		return ;
	}
	lowthous(indict, temp, 1);
	end = ft_onestrstr(indict, &rank[39 - i]);
	ft_print(end, 1);
}

int	funn(char *indict, char *argv, char *temp, char *rank)
{
	int	k;

	k = 0;
	if (((ft_strlen(argv) % 3) == 1) && (ft_strlen(argv) > 3))
	{
		funone(indict, argv, temp, rank);
		argv++;
		k++;
	}
	if (((ft_strlen(argv) % 3) == 2) && (ft_strlen(argv) > 3))
	{
		funtwo(indict, argv, temp, rank);
		argv += 2;
		k += 2;
	}
	while (ft_strlen(argv) > 3)
	{
		funthree(indict, argv, temp, rank);
		argv += 3;
		k += 3;
	}
	return (k);
}

void	fun(char *indict, char *argv)
{
	char	*rank;
	char	*temp;
	int		k;

	k = 0;
	rank = (char *)malloc(42);
	temp = (char *)malloc(3);
	if (rank == NULL)
		return ;
	if (temp == NULL)
		return ;
	rank = "000000000000000000000000000000000000000";
	k = funn(indict, argv, temp, rank);
	argv += k;
	lowthous(indict, argv, 0);
	ft_putchar('\n');
}
