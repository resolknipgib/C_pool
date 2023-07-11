#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*temp;

	if (min >= max)
		return (-1);
	temp = (int *)malloc(sizeof(int) * (max - min));
	if (temp == (void *))
		return (-1);
	i = 0;
	while (min < max)
	{
		temp[i] = min;
		min++;
		i++;
	}
	*range = temp;
	return (i);
}
