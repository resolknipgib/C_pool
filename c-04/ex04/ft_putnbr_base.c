/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 20:54:43 by ltalia            #+#    #+#             */
/*   Updated: 2021/07/13 20:54:47 by ltalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (!base || !base[1])
		return (0);
	while (base[i] > '\0')
	{
		z = i + 1;
		if (!((base[i] >= '0' && base[i] <= '9') || (base[i] >= 'a' \
			&& base[i] <= 'z') || (base[i] >= 'A' && base[i] <= 'Z')))
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (i);
}

void	ft_putarr(long int n[33], int i, char *base)
{
	char	c;

	i--;
	while (i >= 0)
	{
		c = base[n[i]];
		ft_putchar(c);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	long int	bas;
	long int	nb;
	long int	n[33];

	nb = (long int) nbr;
	bas = ft_check_base(base);
	if (bas > 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		i = 0;
		while (nb > 0)
		{
			n[i] = (nb % bas);
			nb /= bas;
			i++;
		}
		ft_putarr(n, i, base);
	}
}
