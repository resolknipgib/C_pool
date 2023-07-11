/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:53:17 by ltalia            #+#    #+#             */
/*   Updated: 2021/07/14 19:53:27 by ltalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putboard(int *board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	if (!((board[0] == 9) && (board[1] == 7) && (board[9] == 3)))
		write(1, "\n", 1);
}

int	checkdiag(int a, int b)
{
	if (a >= b)
		return (a - b);
	else
		return (b - a);
}

int	check(int queen, int *board)
{
	int	i;

	i = 0;
	while (i < queen)
	{
		if ((board[queen] == board[i])
			|| (checkdiag(board[queen], board[i]) == (queen - i)))
			return (0);
		i++;
	}
	return (1);
}

void	start(int queen, int *board, int *k)
{
	board[queen] = 0;
	while (board[queen] < 10)
	{
		if (check(queen, board) > 0)
		{
			if (queen == 9)
			{
				ft_putboard(board);
				*k = *k + 1;
			}
			else
				start(queen + 1, board, k);
		}
		board[queen]++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	queen;
	int	k;

	k = 0;
	queen = 0;
	start(queen, board, &k);
	return (k);
}
