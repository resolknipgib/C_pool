int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	k;
	int	l;

	k = 0;
	l = 1;
	i = 0;
	if (length < 2)
		return (1);
	while (i < length - 1)
	{
		if (f(tab[i + 1], tab[i]) < 0)
			k++;
		if (f(tab[i + 1], tab[i]) == 0)
			l++;
		i++;
	}
	if ((k == 0) || (k == (length - l)))
		return (1);
	return (0);
}
