#include "../includes/ft.h"

int	ft_check_file(char *pathname)
{
	int		fd;
	char	ch;

	fd = open(pathname, O_RDONLY);
	if (fd < 0)
		return (1);
	if (read(fd, &ch, 1) < 0)
		return (1);
	close(fd);
	return (0);
}

int	create_string(char *file, int fd)
{
	char	ch;
	int		i;
	int		lines;

	lines = 0;
	i = 0;
	while (read(fd, &ch, 1) > 0)
	{
		file[i] = ch;
		i++;
		if (ch == '\n')
			lines++;
	}
	file[i + 1] = '\0';
	if (lines < 2)
		return (1);
	return (0);
}

char	*error(int fd)
{
	ft_putstr("map error\n");
	close(fd);
	return (NULL);
}

char	*ft_file_to_str(char *pathname)
{
	int				fd;
	char			*file;

	if (ft_check_file(pathname))
	{
		ft_putstr("map error\n");
		return (NULL);
	}
	fd = open(pathname, O_RDONLY);
	file = (char *)malloc(100000000);
	if (NULL == file || create_string(file, fd))
	{
		free(file);
		return (error(fd));
	}
	close(fd);
	return (file);
}
