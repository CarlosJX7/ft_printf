/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:43:26 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 19:43:27 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*new_str;

	len = ft_strlen(s) + 1;
	new_str = malloc(sizeof(char) * len);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "Hello World";
// 	char *new_str;
// 	new_str = ft_strdup(str);
// 	printf(">%s< -> %p\n", str, &str);
// 	printf(">%s< -> %p\n", new_str, &new_str);
// 	return 0;
// }