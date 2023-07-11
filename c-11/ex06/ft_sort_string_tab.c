int	ft_difflen(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	return (i - j);
}

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	uc1;
	unsigned char	uc2;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		uc1 = s1[i];
		uc2 = s2[i];
		if (uc1 != uc2)
			return (uc1 - uc2);
		i++;
	}
	return (ft_difflen(s1, s2));
}

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

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}
