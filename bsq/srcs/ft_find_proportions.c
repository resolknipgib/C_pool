#include "../includes/ft.h"

void	ft_find_proportions(char **char_map,
				int *lenght, int *count)
{
	*lenght = 0;
	*count = 0;
	while (char_map[*count])
		(*count)++;
	while (char_map[1][*lenght])
		(*lenght)++;
}
