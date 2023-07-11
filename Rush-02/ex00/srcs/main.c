#include "../includes/ft.h"

void	ft_alt_start(char *argv, int fd, char *indict)
{
	char	*end;
	int		i;

	i = 0;
	indict = (char *)malloc(2000);
	if (indict == NULL )
		return ;
	fd = open(&argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	while ((read(fd, &indict[i], 1)))
		i++;
	close(fd);
	end = ft_strstr(indict, argv);
	if (end == 0)
	{
		fun(indict, argv);
		return ;
	}
	ft_print(end, 2);
}

void	ft_start(char *argv, int fd, char *indict)
{
	char	*end;
	int		i;

	i = 0;
	indict = (char *)malloc(2000);
	if (indict == NULL )
		return ;
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	while ((read(fd, &indict[i], 1)))
		i++;
	close(fd);
	end = ft_strstr(indict, argv);
	if (end == 0)
	{
		fun(indict, argv);
		return ;
	}
	ft_print(end, 2);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	*indict;

	fd = 0;
	indict = 0;
	if (argc > 3)
		ft_putstr("Too many arguments\n");
	else if (argc == 2)
	{
		if (ft_str_is_numeric(argv[1]))
			ft_start(argv[1], fd, indict);
		else
			ft_putstr("Invalid argument\n");
	}
	else if (argc == 3)
	{
		if (ft_str_is_numeric(argv[2]))
			ft_alt_start(argv[2], fd, indict);
		else
			ft_putstr("Invalid argument\n");
	}
	free(indict);
}
