/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:44:10 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 19:44:13 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	size_t			len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char ft_test(unsigned int n, char c)
// {
// 	n = n + 1;
// 	return (c + 1);
// }
// #include <stdio.h>
// int main(void)
// {
// 	char *str = "aaaa";
// 	char *str2;

// 	str2 = ft_strmapi(str, &ft_test);
// 	printf(">%s<\n", str2);
// 	free(str2);
// 	return 0;
// }