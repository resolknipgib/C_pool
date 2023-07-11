/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:58:22 by ltalia            #+#    #+#             */
/*   Updated: 2021/07/11 19:58:27 by ltalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
