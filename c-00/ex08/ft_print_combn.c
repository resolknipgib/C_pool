/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:29:43 by ltalia            #+#    #+#             */
/*   Updated: 2021/07/08 15:29:48 by ltalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchr(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_combn2(int a[10], int n)
{
	int	i;
	int	c;

	c = n - 1;
	while (c > 0)
	{
		while (a[c] == (9 + c - (n - 1)) && c >= 0)
			c -= 1;
		if (c < 0)
			break ;
		a[c] += 1;
		i = c;
		while (i++ < n)
			a[i] = a[i - 1] + 1;
		c = n - 1;
		ft_putchr();
		i = 0;
		while (i < n)
			ft_putchar(a[i++] + '0');
	}
}

void	ft_print_combn(int n)
{
	int	a[10];
	int	i;

	i = -1;
	while (i++ < n)
		a[i] = i;
	i = 0;
	while (i < n)
		ft_putchar(a[i++] + '0');
	ft_print_combn2(a, n);
}
