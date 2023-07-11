#include "../includes/ft.h"

int	ft_strcount(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != '\n') && ((str[i + 1] == '\n') || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

void	full_array(char **result, char *str, int *c)
{
	int		k;
	int		i;
	int		j;

	i = 0;
	while (str[i] != '\0')
	{
		k = 0;
		j = i;
		while ((str[i] != '\n') && (str[i] != '\0'))
			i++;
		result[*c] = (char *)malloc(sizeof(char) * (i - j) + 1);
		while (j < i)
		{
			result[*c][k] = str[j];
			j++;
			k++;
		}
		result[*c][k] = '\0';
		(*c)++;
		i++;
	}
}

char	**ft_create_array(char **result, char *str)
{
	int		c;

	c = 0;
	full_array(result, str, &c);
	result[c] = NULL;
	return (result);
}

char	**ft_split(char *str)
{
	char	**result;
	int		count;

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	count = ft_strcount(str);
	result = malloc((count + 1) * sizeof(char *));
	if (result == NULL)
	{
		free(str);
		ft_putstr("map error\n");
		return (NULL);
	}
	if (ft_create_array(result, str) == NULL)
	{
		free(str);
		ft_putstr("map error\n");
		return (NULL);
	}
	free(str);
	return (result);
}
