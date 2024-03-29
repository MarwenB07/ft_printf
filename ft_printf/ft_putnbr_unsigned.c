/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:18:58 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/19 02:48:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// return the size of my putnbr_unsigned //

static int	len_putnbr_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

// for %u //

int	ft_putnbr_unsigned(unsigned int n, int *error)
{
	int	len;

	len = len_putnbr_unsigned(n);
	if (n >= 10)
	{
		ft_putnbr_unsigned(n / 10, error);
		ft_putnbr_unsigned(n % 10, error);
	}
	else
		ft_putchar(n + '0', error);
	return (len);
}
