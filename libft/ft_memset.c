/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:43:14 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 18:43:15 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dest;
	size_t			i;

	dest = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	int i = 0;
// 	char buffer1[10] = {0};
// 	printf("=== ft_memset ===\n");
// 	ft_memset(buffer1, 47, 10);
// 	printf("ft_memset: ");
// 	// hex para los valores no imprimibles
// 	while (i < 10)
// 	{
// 		printf("%c", (unsigned char)buffer1[i]);
// 		i++;
// 	}
// 	printf("\n\n");
// 	printf("===  memset  ===\n");
// 	char buffer2[10] = {0};
// 	memset(buffer2, 47, 10);
// 	printf("memset:    ");
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%02x", (unsigned char)buffer1[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }