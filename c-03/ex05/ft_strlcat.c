/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:59:48 by ltalia            #+#    #+#             */
/*   Updated: 2021/07/11 19:59:54 by ltalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i += 1;
	return (i);
}

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (dst[l] && l < size)
		l++;
	i = l;
	while (src[l - i] && l + 1 < size)
	{
		dst[l] = src[l - i];
		l++;
	}
	if (i < size)
		dst[l] = '\0';
	return (i + ft_strlen(src));
}
