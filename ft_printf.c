/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 18:14:04 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/30 18:14:06 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_type(char c, va_list list)
{
	if (c == 'c')
		return (ft_print_char(list));
	else if (c == 'd')
		ft_print_int(list);
	return 0;
}

int print_output(char *str, va_list list)
{
	size_t	i;
	int r;

	i = 0;
	r = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			r = print_type(str[i + 1], list);
			i++;
		}else
			ft_putchar_fd(str[i], 1);
		i++;
	}
	return r;
}

int count_format(char const *str)
{
	size_t i;
	size_t n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] == '%')
			n++;
		i++;
	}
	return (n);
}

int ft_printf(char const *format, ...)
{
	va_list list;
	size_t n;
	char *str;
	int r;

	r = 0;
	str = (char *)format;
	n = count_format(format);
	va_start(list, format);
	r = print_output(str, list);
	va_end(list);
	return r;
}