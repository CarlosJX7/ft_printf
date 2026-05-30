/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:42:55 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 18:42:56 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	str1;

	i = 0;
	str = (unsigned char *)s;
	str1 = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == str1)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>
int main(void)
{
	char *str = "Hola mundo";
	int c = 'o';
	int n = 5;
	void *ptr;
	ptr = ft_memchr(str, c, n);
	printf("%s\n", (char *)ptr);
	ptr = memchr(str, c, n);
	printf("%s\n", (char *)ptr);
	return 0;
}*/