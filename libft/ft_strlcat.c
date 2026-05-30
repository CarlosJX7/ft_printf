/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:10:24 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 18:10:25 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	min_dst_len(char *dst, size_t size)
{
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	if (size > dstlen)
		return (dstlen);
	else
		return (size);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen_min;
	size_t	slen;
	size_t	size_copy;
	size_t	i;

	slen = ft_strlen(src);
	dlen_min = min_dst_len(dst, size);
	if (size == dlen_min)
		return (dlen_min + slen);
	i = 0;
	size_copy = size - dlen_min - 1;
	while (src[i] && i < size_copy)
	{
		dst[dlen_min + i] = src[i];
		i++;
	}
	dst[dlen_min + i] = '\0';
	return (dlen_min + slen);
}
// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>
// int main()
// {
// 	{
// 		char str1[] = "01234";
// 		char str2[] = "56789";
// 		int n = 5;
// 		printf("%zu\n", strlcat(str2, str1, n));
// 		printf("dst = %s\n", str2);
// 	}
// 	{
// 		char str1[] = "01234";
// 		char str2[] = "56789";
// 		int n = 5;
// 		printf("%zu\n", ft_strlcat(str2, str1, n));
// 		printf("dst = %s\n\n", str2);
// 	}
// 	{
// 		char str1[] = "01234";
// 		char str2[] = "56789";
// 		int n = 3;
// 		printf("%zu\n", strlcat(str2, str1, n));
// 		printf("dst = %s\n", str2);
// 	}
// 	{
// 		char str1[] = "01234";
// 		char str2[] = "56789";
// 		int n = 3;
// 		printf("%zu\n", ft_strlcat(str2, str1, n));
// 		printf("dst = %s\n\n", str2);
// 	}
// 	{
// 		char str1[] = "01234";
// 		char str2[] = "56789";
// 		int n = 10;
// 		printf("%zu\n", strlcat(str2, str1, n));
// 		printf("libdst = %s\n", str2);
// 	}
// 	{
// 		char str1[] = "01234";
// 		char str2[] = "56789";
// 		int n = 10;
// 		printf("%zu\n", ft_strlcat(str2, str1, n));
// 		printf("ftdst = %s\n\n", str2);
// 	}
// 	{
// 		char str1[] = "01234";
// 		char str2[] = "56789";
// 		int n = 0;
// 		printf("%zu\n", strlcat(str2, str1, n));
// 		printf("dst = %s\n", str2);
// 	}
// 	{
// 		char str1[] = "01234";
// 		char str2[] = "56789";
// 		int n = 0;
// 		printf("%zu\n", ft_strlcat(str2, str1, n));
// 		printf("dst = %s\n\n", str2);
// 	}
// 	{
// 		char str1[] = "01234";
// 		char str2[] = "56789";
// 		int n = 500;
// 		printf("%zu\n", strlcat(str2, str1, n));
// 		printf("dst = %s\n", str2);
// 	}
// 	{
// 		char str1[] = "01234";
// 		char str2[] = "56789";
// 		int n = 500;
// 		printf("%zu\n", ft_strlcat(str2, str1, n));
// 		printf("dst = %s\n\n", str2);
// 	}
// 	{
// 		char dst1[10] = "Init ";
// 		char dst2[10] = "Init ";
// 		printf("%zu\n", ft_strlcat(dst1, "VeryLongString", 10));
// 		printf("ft=dst = %s\n\n", dst1);
// 		printf("%zu\n\n", strlcat(dst2, "VeryLongString", 10));
// 		printf("lib=dst = %s\n\n", dst2);
// 	}
//     {
//         char dst1[30] = "Hello ";
//         char dst2[30] = "Hello ";
// 		printf("%zu\n", ft_strlcat(dst1, "World!", 30));
// 		printf("ft=dst = %s\n\n", dst1);
// 		printf("%zu\n", strlcat(dst2, "World!", 30));
// 		printf("ft=dst = %s\n\n", dst2);
//     }

// 	return 0;
// }
