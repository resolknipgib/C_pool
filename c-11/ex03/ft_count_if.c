int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	k;
	int	i;

	k = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			k++;
		i++;
	}
	return (k);
}
