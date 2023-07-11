#include "../includes/ft.h"

int	ft_op(char c)
{
	if (c == '+')
		return (0);
	if (c == '-')
		return (1);
	if (c == '*')
		return (2);
	if (c == '/')
		return (3);
	if (c == '%')
		return (4);
	else
		return (5);
}

long long	ft_calc(long long a, char op, long long b)
{
	long	long	(*af[5])(long long a, long long b);
	int				temp;

	af[0] = ft_sum;
	af[1] = ft_sub;
	af[2] = ft_mul;
	af[3] = ft_div;
	af[4] = ft_mod;
	temp = ft_op(op);
	if (temp == 5)
		return (0);
	return ((*af[temp])(a, b));
}

long long	check(char op, long long b)
{
	if (op == '/' && b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (op == '%' && b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if ((check(argv[2][0], ft_atoi(argv[3]))) && (argc == 4))
	{
		ft_putnbr(ft_calc(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3])));
		ft_putchar('\n');
	}
	return (0);
}
