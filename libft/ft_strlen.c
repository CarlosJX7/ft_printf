/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:49:35 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 15:49:37 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char *s;
// 	s = NULL;
// 	//printf("%lu\n", strlen(s));
// 	printf("%zu\n", ft_strlen(s));
// 	return 0;
// }