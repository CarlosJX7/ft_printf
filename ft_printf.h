/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 22:01:19 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/31 22:01:20 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(char const *format, ...);
int		ft_print_char(char c);
int		ft_print_str(char *str);
int		int_len(int n);
int		ft_putnbr_base(long long nbr, char *base);
int		ft_print_ptr(void *ptr, char *base);
int		putnbr_base_ul(unsigned long nbr, char *base);

#endif
