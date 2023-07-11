void	ft_swap(char **a, char **b)
{
	char	*t;

	t = *a;
	*a = *b;
	*b = t;
}

int	ft_arrlen(char **arr)
{
	int	i;

	i = 0;
	while (*arr++)
		i++;
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int	i;
	int	j;
	int	l;

	i = 0;
	l = ft_arrlen(tab);
	while (i < l - 1)
	{
		j = 0;
		while (j < l - i - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}
