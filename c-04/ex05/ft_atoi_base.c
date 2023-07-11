/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 20:54:55 by ltalia            #+#    #+#             */
/*   Updated: 2021/07/13 20:55:01 by ltalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (!base || !base[1])
		return (0);
	while (base[i] > '\0')
	{
		z = i + 1;
		if (!((base[i] >= '0' && base[i] <= '9') || (base[i] >= 'a' \
			&& base[i] <= 'z') || (base[i] >= 'A' && base[i] <= 'Z')))
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (i);
}

int	ft_k(int nb, int k, char c, int s)
{
	int	n;

	if (s == 1)
	{
		n = 1;
		if (k < 0)
			return (0);
		if (k == 0)
			return (1);
		while (k--)
			n *= nb;
		return (n);
	}
	if (s == 2)
	{
		if (c >= '0' && c <= '9')
			return (c - '0');
		if (c >= 'A' && c <= 'F')
			return (c - 'A' + 10);
		if (c >= 'a' && c <= 'f')
			return (c - 'a' + 10);
		return (-1);
	}
	return (1000);
}

char	*ft_rev_str(char *str)
{
	int		i;
	int		k;
	char	temp;

	i = 0;
	while (str[i] != '\0')
		i++;
	k = 0;
	while (k < i / 2)
	{
		temp = str[k];
		str[k] = str[i - k - 1];
		str[i - k - 1] = temp;
		k++;
	}
	return (str);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	k;
	int	bas;

	str = ft_rev_str(str);
	bas = ft_check_base(base);
	if (bas > 0)
	{
		k = 0;
		n = 0;
		while (str[0] != '\0' && str[0] != '-')
		{
			if ((ft_k(0, 0, *str, 2) != -1) && (ft_k(0, 0, *str, 2) < bas))
				n += ft_k(0, 0, *str, 2) * ft_k(bas, k++, *str, 1);
			str++;
		}
		if (*str == '-')
			return (-1 * n);
		return (n);
	}
	return (0);
}
