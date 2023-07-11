/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:23:29 by ltalia            #+#    #+#             */
/*   Updated: 2021/07/11 19:23:33 by ltalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rushhh(int x, int y, int i, int j)
{
	if (i == y)
	{
		ft_putchar('A');
		while (j < x - 1)
		{
			ft_putchar('B');
			j++;
		}
		if (x != 0)
			ft_putchar('C');
		if (!(i == y))
			ft_putchar('\n');
	}
	if (!(i == 0) && !(i == y))
	{
		ft_putchar('B');
		while (j < x - 1)
		{
			ft_putchar(' ');
			j++;
		}
		if (x != 0)
			ft_putchar('B');
		ft_putchar('\n');
	}
}

void	rushh(int x, int y, int i, int j)
{
	if (i == 0)
	{
		ft_putchar('A');
		while (j < x - 1)
		{
			ft_putchar('B');
			j++;
		}
		if (x != 0)
			ft_putchar('C');
		if (y != 0)
			ft_putchar('\n');
	}
	if (y == 0)
		return ;
	rushhh(x, y, i, j);
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	if ((y <= 0) || (x <= 0))
		return ;
	x--;
	y--;
	i = 0;
	while (i <= y)
	{
		j = 0;
		rushh(x, y, i, j);
		i++;
	}
}
