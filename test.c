#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int suma(int n, ...)
{
	size_t i;
	int sum;
	va_list list_num;
	va_start(list_num, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum = sum + va_arg(list_num, int);
		i++;
	}
	va_end(list_num);
	return sum;
}

int main(void)
{
	printf("sum = %d\n", suma(4, 1, 1, 1 , 1));
	return 0;
}
