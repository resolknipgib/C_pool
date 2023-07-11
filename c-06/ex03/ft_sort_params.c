#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_sort(char **argv, int argc)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < (argc - 1))
	{
		j = 0;
		while (argv[i][j] == argv[i + 1][j])
			j++;
		if (argv[i][j] > argv[i + 1][j])
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_sort(argv, argc);
	argv++;
	while (*argv)
	{
		ft_putstr(*argv++);
		ft_putchar('\n');
	}
	return (0);
}
