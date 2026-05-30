/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:44:27 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 19:44:28 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_inset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static unsigned int	ft_find_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_char_inset(s1[i], set))
		i++;
	return (i);
}

static size_t	ft_find_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i >= 0 && ft_char_inset(s1[i], set))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	start;
	size_t			end;

	if (!s1 || !set)
		return (NULL);
	start = ft_find_start(s1, set);
	end = ft_find_end(s1, set);
	if (start > (unsigned int)end)
		return (ft_substr(s1, 0, 0));
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}

// int main(void)
// {
// 	char *s1 = "aaaabbbcaacabbaaaaaabbbaaaaaa";
// 	char *s2 = "ab";
// 	char *str;
// 	str = ft_strtrim(s1, s2);
// 	printf(">%s<\n", str);
// 	free(str);
// 	return 0;
// }