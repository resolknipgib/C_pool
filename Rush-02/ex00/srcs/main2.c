#include "../includes/ft.h"

char	*ft_charinstr(char *str)
{
	while (*str)
	{
		if (ft_isspace(*str))
			str++;
		if (!(ft_char_is_alpha(*str)))
			str++;
		if (ft_char_is_alpha(*str))
			return (str);
	}
	return (str);
}

void	ft_print(char *end, int k)
{
	char	*begin;
	char	*finish;

	begin = ft_charinstr(end);
	finish = ft_strchar(begin, '\n');
	while (begin < finish)
	{
		if (!(ft_isspace(begin[0])))
			ft_putchar(*begin++);
		if (ft_isspace(begin[0]) && ft_isspace(begin[1]))
			begin++;
		if (ft_isspaceN(begin[0]) && !(ft_isspace(begin[1])))
		{
			ft_putchar(' ');
			begin++;
		}
	}
	if (k == 2)
		ft_putchar('\n');
	if (k == 1)
		ft_putchar(' ');
}
