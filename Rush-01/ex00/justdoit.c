int	checkboard(int board[4][4], int *in_num);

int	check0(int board[4][4], int *r, int *c)
{
	*r = 0;
	*c = 0;
	while (*r < 4)
	{
		*c = 0;
		while (*c < 4)
		{
			if (board[*r][*c] == 0)
				return (1);
			*c += 1;
		}
		*r += 1;
	}
	return (0);
}

int	checkcol(int board[4][4], int col, int num)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (board[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}

int	checkrow(int board[4][4], int row, int num)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (board[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	checksafe(int board[4][4], int r, int c, int nb)
{
	if (checkrow(board, r, nb) && checkcol(board, c, nb)
		&& (board[r][c] == 0))
		return (1);
	return (0);
}

int	justdoit(int board[4][4], int *input)
{
	int	row;
	int	col;
	int	i;
	int	nb;

	nb = 1;
	i = 0;
	if ((check0(board, &row, &col) == 0) && (checkboard(board, input) == 1))
		return (1);
	while (nb <= 4)
	{
		if (checksafe(board, row, col, nb))
		{
			board[row][col] = nb;
			if (justdoit(board, input) == 1)
				return (1);
			board[row][col] = 0;
		}
		nb++;
	}
	return (0);
}
