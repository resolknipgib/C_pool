#include "../includes/ft.h"

void	find_synonym(char *first_line, char ch, int *i)
{
	char	*chars;
	int		j;

	j = 0;
	while (first_line[j])
		j++;
	chars = (char *)malloc(sizeof(char) * 3);
	chars[0] = first_line[j - 3];
	chars[1] = first_line[j - 2];
	chars[2] = first_line[j - 1];
	if (ch == chars[0])
		*i = 1;
	if (ch == chars[1])
		*i = 0;
	free(chars);
}

int	**ft_get_int_map(char **char_map)
{
	int		**int_map;
	int		lenght;
	int		count;
	int		i;
	int		j;

	ft_find_proportions(char_map, &lenght, &count);
	int_map = (int **)malloc(sizeof(int *) * count);
	i = 0;
	while (i < count - 1)
	{
		int_map[i] = (int *)malloc(sizeof(int) * lenght);
		j = 0;
		while (j < lenght)
		{
			find_synonym(char_map[0], char_map[i + 1][j], &int_map[i][j]);
			j++;
		}
		i++;
	}
	return (int_map);
}
