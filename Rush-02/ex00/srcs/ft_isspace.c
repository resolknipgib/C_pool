#include "../includes/ft.h"

int	ft_isspaceM(char c)
{
	if ((c == ':') || (c == ' ') || (c == '\t') || (c == '\n') || (c == '\v')
		|| (c == '\f') || (c == '\r'))
		return (1);
	return (0);
}

int	ft_isspaceN(char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\v') || (c == '\f') || (c == '\r'))
		return (1);
	return (0);
}

int	ft_isspace(char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n') || (c == '\v') || (c == '\f')
		|| (c == '\r'))
		return (1);
	return (0);
}
