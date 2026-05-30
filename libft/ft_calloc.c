/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:43:21 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 18:43:22 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;
	size_t			total;
	size_t			i;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	total = count * size;
	mem = malloc(total);
	if (!mem)
		return (NULL);
	i = 0;
	while (i < total)
	{
		mem[i] = 0;
		i++;
	}
	return ((void *)mem);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>
// #include <stdint.h>
// int main(void)
// {
// 	char *mem1;
// 	char *mem2;
// 	size_t count;
// 	size_t size;
// 	int i;
// count = (SIZE_MAX + 1) / 10;
// size = 10;
// 	printf("=== ft_calloc ===\n");
// 	mem1 = ft_calloc(count, size);
// 	if (!mem1)
// 	{
// 		printf("Error\n");
// 		return (1);
// 	}
// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("%d\n", mem1[i]);
// 		i++;
// 	}
// 	free(mem1);
// 	printf("\n=== calloc original ===\n");
// 	mem2 = calloc(count , size);
// 	if (!mem2)
// 		return (1);
// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("%d\n", mem2[i]);
// 		i++;
// 	}
// 	free(mem2);
// 	return (0);
// }