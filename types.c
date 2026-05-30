/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 20:03:21 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/30 20:03:23 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_char(va_list list)
{
	char c;

	c = (char)va_arg(list, int);
	ft_putchar_fd(c, 1);
	return (1);
}

void ft_print_int(va_list list)
{
	int n;

	n = (int)va_arg(list, int);
	ft_putnbr_fd(n, 1);
}
