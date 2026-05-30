/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 17:24:34 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 17:24:36 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// #include <string.h>
// #include <stdio.h>
// #include <bsd/string.h>
// int main(void)
// {
// 	{
// 		char dst[100] = "--";
// 		char *src = "Hello World--";
// 		printf("r = %zu\n", strlcpy(dst, src, 0));
// 		printf(">%s<\n", dst);
// 	}
// 	{
// 		char dst[100] = "--";
// 		char *src = "Hello World--";
// 		printf("r = %zu\n", ft_strlcpy(dst, src, 0));
// 		printf(">%s<\n", dst);
// 	}
// 	{
// 		char dst[100] = "--";
// 		char *src = "Hello World--";
// 		printf("r = %zu\n", strlcpy(dst, src, 1));
// 		printf(">%s<\n", dst);
// 	}
// 	{
// 		char dst[100] = "--";
// 		char *src = "Hello World--";
// 		printf("r = %zu\n", ft_strlcpy(dst, src, 1));
// 		printf(">%s<\n", dst);
// 	}
// 	{
// 		char dst[100] = "--";
// 		char *src = "Hello World--";
// 		printf("r = %zu\n", strlcpy(dst, src, 100000));
// 		printf(">%s<\n", dst);
// 	}
// 	{
// 		char dst[100] = "--";
// 		char *src = "Hello World--";
// 		printf("r = %zu\n", ft_strlcpy(dst, src, 100000));
// 		printf(">%s<\n", dst);
// 	}
// 	return 0;
// }