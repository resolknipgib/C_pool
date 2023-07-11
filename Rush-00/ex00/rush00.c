/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:22:44 by ltalia            #+#    #+#             */
/*   Updated: 2021/07/11 19:22:55 by ltalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rushhh(int x, int y, int i, int j)
{
	if (i == y)
	{
		ft_putchar('o');
		while (j < x - 1)
		{
			ft_putchar('-');
			j++;
		}
		if (x != 0)
			ft_putchar('o');
		if (!(i == y))
			ft_putchar('\n');
	}
	if (!(i == 0) && !(i == y))
	{
		ft_putchar('|');
		while (j < x - 1)
		{
			ft_putchar(' ');
			j++;
		}
		if (x != 0)
			ft_putchar('|');
		ft_putchar('\n');
	}
}

void	rushh(int x, int y, int i, int j)
{
	if (i == 0)
	{
		ft_putchar('o');
		while (j < x - 1)
		{
			ft_putchar('-');
			j++;
		}
		if (x != 0)
			ft_putchar('o');
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
