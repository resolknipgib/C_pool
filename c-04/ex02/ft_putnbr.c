/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 20:54:07 by ltalia            #+#    #+#             */
/*   Updated: 2021/07/13 20:54:10 by ltalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putm2(int nb)
{
	ft_putchar('-');
	ft_putchar('2');
	nb = 147483648;
	return (nb);
}

void	ft_putnbr(int nb)
{
	int		t;
	int		s;

	s = 1;
	if (nb == -2147483648)
		nb = ft_putm2(nb);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	t = nb / 10;
	while (t > 0)
	{
		s *= 10;
		t /= 10;
	}
	t = nb;
	while (s > 0)
	{
		ft_putchar((t / s) + 48);
		t %= s;
		s /= 10;
	}
}
