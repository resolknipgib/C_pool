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

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		y;
	char	*c;

	c = 0;
	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			c = str + i;
			y = 0;
			while (str[i + y] == to_find[y])
			{
				if (to_find[y + 1] == '\0')
					return (c);
				y++;
			}
			c = 0;
		}
		i++;
	}
	return (0);
}
