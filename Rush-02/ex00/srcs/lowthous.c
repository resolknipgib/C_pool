#include "../includes/ft.h"

void	lowhundd(char *indict, char *argv, int k)
{
	int		temp;
	char	*end;

	if (ft_atoi(argv) >= 20)
	{
		temp = argv[1];
		argv[1] = '0';
		end = ft_strstr(indict, argv);
		ft_print(end, k);
		argv[1] = temp;
		argv++;
	}
	if (ft_atoi(argv) < 20)
	{
		end = ft_strstr(indict, argv);
		ft_print(end, k);
		return ;
	}
}

void	lowhund(char *indict, char *argv, int k)
{
	char	*end;

	if ((ft_strlen(argv) == 2) && (argv[0] == '0'))
		argv++;
	if ((ft_strlen(argv) == 2) && (argv[0] != '0'))
		lowhundd(indict, argv, k);
	if ((ft_strlen(argv) == 1) && (argv[0] != '0'))
	{
		end = ft_strstr(indict, argv);
		ft_print(end, k);
	}
}

void	lowthous(char *indict, char *argv, int k)
{
	char	*end;

	if ((ft_strlen(argv) == 3) && (argv[0] != '0'))
	{
		end = ft_strchar(indict, argv[0]);
		ft_print(end, 1);
		end = ft_strstr(indict, "100");
		ft_print(end, 1);
		argv++;
	}
	if ((ft_strlen(argv) == 3) && (argv[0] == '0'))
		argv++;
	lowhund(indict, argv, k);
}
