/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:18:16 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/19 02:47:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

// int //

int	ft_putnbr(int n, int *error);
int	ft_putnbr_unsigned(unsigned int n, int *error);
int	ft_putchar(int n, int *error);
int	ft_putstr(const char *str, int *error);
int	ft_putnbr_hex_maj(unsigned int n, int *error);
int	ft_putnbr_hex_min(unsigned int n, int *error);
int	ft_put_ptr(unsigned long long nbr, int *error);
int	ft_strlen(const char *s);
int	ft_printf(const char *format, ...);

#endif
