#include "ft_printf.h"

int main(void)
{
	char c = '@';
	char d = 42;
	char n;

	n = ft_printf("Hola >%c< a>%d< mundoo\n", c, d);
	ft_putnbr_fd(n, 1);
	return 0;
}