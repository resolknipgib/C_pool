#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*p;
	int	i;

	p = (int *)malloc(sizeof(*tab) * length);
	if (!p)
		return (0);
	i = 0;
	while (i < length)
	{
		p[i] = f(tab[i]);
		i++;
	}
	return (p);
}
