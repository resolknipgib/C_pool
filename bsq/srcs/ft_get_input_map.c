#include "../includes/ft.h"

char	*ft_get_input_map(void)
{
	int		fd;
	char	ch;

	fd = open("busmap", O_WRONLY | O_CREAT | O_TRUNC, S_IWRITE | S_IREAD);
	while (read(0, &ch, 1))
	{
		write(fd, &ch, 1);
	}
	close(fd);
	return ("busmap");
}
