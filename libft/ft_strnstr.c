/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:40:15 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 18:40:16 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_word(const char *str, const char *word, size_t max)
{
	size_t	i;

	i = 0;
	while (word[i] && i < max)
	{
		if (str[i] != word[i])
			return (0);
		i++;
	}
	return (word[i] == '\0');
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		if (ft_find_word(&big[i], little, len - i))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <bsd/string.h>
// int main(void)
// {
// 	char *big = "aaabcabcd";
// 	char *little = "cd";
// 	printf(">%s<\n", strnstr(big, little, 8));
// 	printf(">%s<\n", ft_strnstr(big, little, 8));
// 	return 0;
// }