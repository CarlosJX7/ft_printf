/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:42:43 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 18:42:45 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>
// void	ft_bzero(void *s, size_t n);
// static void	print_bytes(const unsigned char *buf, size_t n)
// {
// 	size_t i = 0;
// 	while(i < n)
// 	{
// 		printf("%02X ", buf[i]);
// 		i++;
// 	}
// 	printf("\n");
// }
// int main(void)
// {
// 	unsigned char buf1[10] = {1,2,3,4,5,6,7,8,9,15};
// 	unsigned char buf2[10] = {1,2,3,4,5,6,7,8,9,15};
// 	printf("Antes:\n");
// 	print_bytes(buf1, 10);
// 	print_bytes(buf2, 10);
// 	ft_bzero(buf1, 5);        // Tu función
// 	bzero(buf2, 5);           // Función estándar (o memset(buf2,0,5))
// 	printf("\nDespués (ft_bzero vs bzero):\n");
// 	print_bytes(buf1, 10);
// 	print_bytes(buf2, 10);
// 	return 0;
// }
