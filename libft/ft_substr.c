/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:44:40 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 19:44:43 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, sizeof(char)));
	if (len + start > s_len)
		len = s_len - start;
	i = 0;
	new_str = malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	while (s[i + start] && i < len)
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "123456789";
// 	char *new_str;

// 	new_str = ft_substr(str, 3, 109);
// 	printf("%s\n", new_str);
// 	free(new_str);
// 	new_str = ft_substr(str, 3, 1);
// 	printf("%s\n", new_str);
// 	free(new_str);
// 	new_str = ft_substr(str, 3, 2);
// 	printf("%s\n", new_str);
// 	free(new_str);
// 	return 0;
// }