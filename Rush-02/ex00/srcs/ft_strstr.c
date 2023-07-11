/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:59:21 by ltalia            #+#    #+#             */
/*   Updated: 2021/07/11 19:59:24 by ltalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft.h"

char	*ft_strchar(char *str, char to_find)
{
	int	i;
	int	k;
	int	count;

	i = 0;
	k = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == to_find)
		{
			count++;
			k = i;
		}
		if (count == 1)
			return (str + i);
		i++;
	}
	if (count == 1)
		return (str + k);
	return (NULL);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == to_find[0]) && ((str[i - 1] == '\n')
								|| (!(str[i - 1]))))
		{
			j = 0;
			while (str[i + j] == to_find[j])
			{
				if ((to_find[j + 1] == '\0') && ft_isspaceM(str[i + j + 1]))
					return (str + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

char	*ft_onestrstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == to_find[0]) && ((str[i - 2] == '\n')
								|| (!(str[i - 2]))) && (str[i - 1] == '1'))
		{
			j = 0;
			while (str[i + j] == to_find[j])
			{
				if ((to_find[j + 1] == '\0') && ft_isspaceM(str[i + j + 1]))
					return (str + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

char	*ft_nstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j + 1] == '\n')
			{
				if ((to_find[j + 1] == '\0') && ft_isspaceM(str[i + j + 1]))
					return (str + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
