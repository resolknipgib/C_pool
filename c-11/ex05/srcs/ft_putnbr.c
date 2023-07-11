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
#include "../includes/ft.h"

void	ft_putnbr(long long nb)
{
	long long	t;
	long long	s;

	s = 1;
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
