/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:43:12 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 19:43:14 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_malloc_error(char **tab, unsigned int filled)
{
	unsigned int	i;

	i = 0;
	while (i < filled)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static unsigned int	ft_get_nb_strs(char const *s, char c)
{
	unsigned int	i;
	unsigned int	nb_strs;

	if (!s[0])
		return (0);
	i = 0;
	nb_strs = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			nb_strs++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		nb_strs++;
	return (nb_strs);
}

static char	*ft_get_next_str(char *next_str, unsigned int *next_str_len, char c)
{
	unsigned int	i;

	next_str += *next_str_len;
	*next_str_len = 0;
	i = 0;
	while (next_str[i] && next_str[i] == c)
		next_str++;
	while (next_str[i])
	{
		if (next_str[i] == c)
			return (next_str);
		(*next_str_len)++;
		i++;
	}
	return (next_str);
}

static void	ft_zerovalues(unsigned int *a, unsigned int *b)
{
	*a = 0;
	*b = 0;
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	char			*next_str;
	unsigned int	next_str_len;
	unsigned int	nb_strs;
	unsigned int	i;

	if (!s)
		return (NULL);
	nb_strs = ft_get_nb_strs(s, c);
	tab = (char **)malloc(sizeof(char *) * (nb_strs + 1));
	if (!tab)
		return (NULL);
	next_str = (char *)s;
	ft_zerovalues(&next_str_len, &i);
	while (i < nb_strs)
	{
		next_str = ft_get_next_str(next_str, &next_str_len, c);
		tab[i] = (char *)malloc(sizeof(char) * (next_str_len + 1));
		if (!tab[i])
			return (ft_malloc_error(tab, i));
		ft_strlcpy(tab[i], next_str, next_str_len + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str = " Hello@@@World@@this@is split@";
	char c = '@';
	char **strs;
	int i = 0;

	strs = ft_split(str, c);
	while (strs[i])
	{
		printf(">%s<\n", strs[i]);
		free(strs[i]);
		i++;
	}
	free(strs);
	return (0);
}*/