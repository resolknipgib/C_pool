int	*ft_range(int min, int max)
{
	int	*ret;
	int	res;
	int	i;

	if (min >= max)
	{
		ret = 0;
		return (ret);
	}
	else
	{
		res = max - min;
		ret = (int *)malloc(sizeof(*ret) * res);
		i = 0;
		while (min < max)
		{
			ret[i] = min;
			min++;
			i++;
		}
	}
	return (ret);
}
