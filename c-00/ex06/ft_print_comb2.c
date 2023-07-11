/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:02:10 by ltalia            #+#    #+#             */
/*   Updated: 2021/07/08 14:02:18 by ltalia           ###   ########.fr       */
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

void	ft_putarrrr(char c1, char c2, char c3, char c4)
{
	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(' ');
	ft_putchar(c3);
	ft_putchar(c4);
}

void	ft_print_comb2(void)
{
	char	c[4];

	c[0] = 0;
	c[1] = 0;
	c[2] = 0;
	c[3] = 1;
	while (!((c[0] == 9) && (c[1] == 9)))
	{
		ft_putarrrr(c[0] + 48, c[1] + 48, c[2] + 48, c[3] + 48);
		if (!((c[0] == 9) && (c[1] == 8)))
			ft_putchr();
		c[3] = (c[3] + 1) % 10;
		if (c[3] == 0)
			c[2] = (c[2] + 1);
		if (c[2] == 10)
		{
			c[2] = c[0];
			c[1] = (c[1] + 1) % 10;
			if (c[1] == 0)
				c[0]++;
			c[3] = c[1] + 1;
		}
	}
}
