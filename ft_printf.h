#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include "libft/libft.h"

int		ft_printf(char const *, ...);
int		ft_print_char(va_list list);
void	ft_print_int(va_list list);

#endif