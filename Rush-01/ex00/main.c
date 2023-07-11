#include <unistd.h>

int	initboard(int *input);

int	check(char *ag)
{
	int	i;
	int	e;

	i = 0;
	e = 0;
	while (ag[i])
	{
		if (ag[i] == '4')
			e++;
		i++;
	}
	if (e > 2)
		return (0);
	i = 0;
	e = 0;
	while (ag[i])
	{
		if (ag[i] == '1')
			e++;
		i++;
	}
	if (e != 4)
		return (0);
	return (1);
}

int	checkinput(char *arg, int *input)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (check(arg) == 1)
	{
		while (arg[i])
		{
			if ((arg[i] >= '1' && arg[i] <= '4') && ((arg[i + 1] == ' ')
					|| ((arg[i + 1] == '\0') && (arg[i - 1] == ' '))))
			{
				input[k] = (arg[i] - '0');
				k++;
				i++;
			}
			if (arg[i] == ' ')
				i++;
			else
				return (k);
		}
		input[k] = '\0';
		return (k);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	input[16];
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		i = checkinput(argv[1], input);
		if (i == 16)
			initboard(input);
		else
			write(1, "\nERROR\n\n", 8);
	}
	else
		write(1, "\nERROR\n\n", 8);
	return (0);
}
