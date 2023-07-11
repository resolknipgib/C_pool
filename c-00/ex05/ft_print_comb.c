/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:57:26 by ltalia            #+#    #+#             */
/*   Updated: 2021/07/08 11:57:33 by ltalia           ###   ########.fr       */
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

void	ft_putarrr(int n[3])
{
	ft_putchar(n[0]);
	ft_putchar(n[1]);
	ft_putchar(n[2]);
	if (!((n[0] == 7 + '0') && (n[1] == 8 + '0') && (n[2] == 9 + '0')))
		ft_putchr();
}

void	ft_print_comb(void)
{
	int	n[3];

	n[0] = '0';
	while (n[0] <= '7')
	{
		n[1] = '0';
		while (n[1] <= '8')
		{
			n[2] = '0';
			while (n[2] <= '9')
			{
				if (n[0] < n[1] && n[1] < n[2])
				{
					ft_putarrr(n);
				}
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}
