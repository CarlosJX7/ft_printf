/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:44:21 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 15:44:22 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (i < n)
		return (str1[i] - str2[i]);
	else
		return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *str1 = "aaaa";
// 	char *str2 = "abbb";
// 	int n;
// 	n = 0;
// 	printf("Valor devuelto por libc: %d\n", strncmp(str1, str2, n));
// 	printf("Valor devuelto por lift: %d\n", ft_strncmp(str1, str2, n));
// 	printf("Valor devuelto por libc: %d\n", strncmp(str2, str1, n));
// 	printf("Valor devuelto por lift: %d\n", ft_strncmp(str2, str1, n));
// 	n = 2;
// 	printf("Valor devuelto por libc: %d\n", strncmp(str1, str2, n));
// 	printf("Valor devuelto por lift: %d\n", ft_strncmp(str1, str2, n));
// 	printf("Valor devuelto por libc: %d\n", strncmp(str2, str1, n));
// 	printf("Valor devuelto por lift: %d\n", ft_strncmp(str2, str1, n));
// 	n = 1;
// 	printf("Valor devuelto por libc: %d\n", strncmp(str1, str2, n));
// 	printf("Valor devuelto por lift: %d\n", ft_strncmp(str1, str2, n));
// 	printf("Valor devuelto por libc: %d\n", strncmp(str2, str1, n));
// 	printf("Valor devuelto por lift: %d\n", ft_strncmp(str2, str1, n));
// 	n = 1;
// 	char str11[] = {255};
// 	char str22[] = {0};
// 	printf("Valor devuelto por libc: %d\n", strncmp(str11, str22, n));
// 	printf("Valor devuelto por lift: %d\n", ft_strncmp(str11, str22, n));
// 	printf("Valor devuelto por libc: %d\n", strncmp(str22, str11, n));
// 	printf("Valor devuelto por lift: %d\n", ft_strncmp(str22, str11, n));
// 	return 0;
// }