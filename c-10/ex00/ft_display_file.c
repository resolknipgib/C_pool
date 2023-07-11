#include <unistd.h>
#include <fcntl.h>

int	ft_display_file(int argc)
{
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	else if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		f;
	char	c;

	if (ft_display_file(argc) == 1)
		return (1);
	f = open(argv[1], O_RDONLY);
	if (f == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	while (read(f, &c, 1) != 0)
		write(2, &c, 1);
	close(f);
	return (0);
}
