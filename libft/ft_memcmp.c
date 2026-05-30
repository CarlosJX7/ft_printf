/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:43:49 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 18:43:50 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	{
// 		char *str1 = "aaaa";
// 		char *str2 = "aaaa";
// 		int n = 2;
// 		printf("%d\n", memcmp(str1, str2, n));
// 		printf("%d\n", ft_memcmp(str1, str2, n));
// 	}
// 	{
// 		char *str1 = "aaaa";
// 		char *str2 = "bbbb";
// 		int n = 2;
// 		printf("%d\n", memcmp(str1, str2, n));
// 		printf("%d\n", ft_memcmp(str1, str2, n));
// 	}
// 	{
// 		char *str1 = "aaaa";
// 		char *str2 = "aaaa";
// 		int n = 0;
// 		printf("%d\n", memcmp(str1, str2, n));
// 		printf("%d\n", ft_memcmp(str1, str2, n));
// 	}
// 	return 0;
// }
