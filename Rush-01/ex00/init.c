#include <unistd.h>

int		justdoit(int board[4][4], int *input);

void	putarr(int board[4][4]);

void	fill44(int board[4][4], int *input, int i)
{
	int	k;

	k = 0;
	while ((input[i]) && i <= 15)
	{
		if ((input[i] == 4) && ((i >= 8 && i <= 11)))
		{
			while (k < 4)
			{
				board[i % 4][k] = k + 1;
				k++;
			}
		}
		k = 4;
		if ((input[i] == 4) && ((i >= 12 && i <= 15)))
		{
			while (k > 0)
			{
				board[i % 4][4 - k] = k;
				k--;
			}
		}
		i++;
	}
}

void	fill4(int board[4][4], int *input)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while ((input[i]) && i < 8)
	{
		if ((input[i] == 4) && ((i >= 0 && i <= 3)))
		{
			while (k < 4)
			{
				board[k][i] = k + 1;
				k++;
			}
		}
		k = 4;
		if ((input[i] == 4) && ((i >= 4 && i <= 7)))
		{
			while (k > 0)
				board[4 - k][(i % 4)] = k--;
		}
		i++;
	}
	fill44(board, input, i);
}

void	fill1(int board[4][4], int *input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		if ((input[i] == 1) && ((i >= 0) && (i <= 3)))
			board[0][i] = 4;
		if ((input[i] == 1) && ((i >= 4) && (i <= 7)))
			board[3][i - 4] = 4;
		if ((input[i] == 1) && ((i >= 8) && (i <= 11)))
			board[i - 8][0] = 4;
		if ((input[i] == 1) && ((i >= 12) && (i <= 15)))
			board[i - 12][3] = 4;
		i++;
	}
	return ;
}

int	initboard(int *input)
{
	int	row;
	int	col;
	int	board[4][4];

	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
	fill1(board, input);
	fill4(board, input);
	if ((justdoit(board, input)) == 1)
		putarr(board);
	else
		write(1, "\nERROR\n\n", 8);
	return (0);
}
