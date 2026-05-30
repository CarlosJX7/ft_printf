/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:49:18 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 15:49:21 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&str[i]);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	{
// 		char *str = "aaabaaa";
// 		char c = 'b';
// 		printf("%s\n", strchr(str, c));
// 		printf("%s\n", ft_strchr(str, c));
// 	}
// 	{
// 		char *str = "aaabaaa";
// 		char c = 'x';
// 		printf("%s\n", strchr(str, c));
// 		printf("%s\n", ft_strchr(str, c));
// 	}
// 	{
// 		char *str = "baaa";
// 		char c = 'b';
// 		printf("%s\n", strchr(str, c));
// 		printf("%s\n", ft_strchr(str, c));
// 	}
// 	{
// 		char *str = "bbbbb";
// 		char c = 'b';
// 		printf("%s\n", strchr(str, c));
// 		printf("%s\n", ft_strchr(str, c));
// 	}
// 	{
// 		char *str = "";
// 		char c = 'b';
// 		printf("%s\n", strchr(str, c));
// 		printf("%s\n", ft_strchr(str, c));
// 	}
// 	{
// 		char *str = "aaabaaa";
// 		char c = ' ';
// 		printf("%s\n", strchr(str, c));
// 		printf("%s\n", ft_strchr(str, c));
// 	}
// 	return 0;
// }