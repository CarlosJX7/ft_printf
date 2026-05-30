/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:49:49 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 15:49:50 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	len = ft_strlen(s);
	str = (char *)s;
	while (len >= 0)
	{
		if (str[len] == (char) c)
			return (&str[len]);
		len = len - 1;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	{
// 		char *str = "aaabaaa";
// 		char c = 'b';
// 		printf("1>%s\n", strrchr(str, c));
// 		printf("1>%s\n", ft_strrchr(str, c));
// 	}
// 	{
// 		char *str = "aaabaaa";
// 		char c = 'x';
// 		printf("2>%s\n", strrchr(str, c));
// 		printf("2>%s\n", ft_strrchr(str, c));
// 	}
// 	{
// 		char *str = "baaa";
// 		char c = 'b';
// 		printf("3>%s\n", strrchr(str, c));
// 		printf("3>%s\n", ft_strrchr(str, c));
// 	}
// 	{
// 		char *str = "bbbbb";
// 		char c = 'b';
// 		printf("4>%s\n", strrchr(str, c));
// 		printf("4>%s\n", ft_strrchr(str, c));
// 	}
// 	{
// 		char *str = "";
// 		char c = 'b';
// 		printf("5>%s\n", strrchr(str, c));
// 		printf("5>%s\n", ft_strrchr(str, c));
// 	}
// 	{
// 		char *str = "aaabaaa";
// 		char c = '\0';
// 		printf("6>%s\n", strrchr(str, c));
// 		printf("6>%s\n", ft_strrchr(str, c));
// 	}
// 	return 0;
// }