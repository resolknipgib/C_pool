#include "../includes/ft.h"

int	ft_microatoi(char *str)
{
	int	nb;
	int	i;

	i = 0;
	nb = 0;
	while ((str[i] >= '0' && str[i] <= '9') && (str[i + 3] != '\0'))
	{
		nb = (nb * 10) + ((int)str[i] - '0');
		i++;
	}
	return (nb);
}
