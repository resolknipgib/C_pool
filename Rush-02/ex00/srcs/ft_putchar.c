/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:45:21 by ltalia            #+#    #+#             */
/*   Updated: 2021/07/08 18:02:43 by ltalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
