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

int	ft_print_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	if (str)
		ft_putstr_fd(str, 1);
	else
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	return (ft_strlen(str));
}

int	ft_print_ptr(void *ptr, char *base)
{
	if (ptr)
		return (ft_print_str("0x") + putnbr_base_ul((unsigned long)ptr, base));
	else
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
}
