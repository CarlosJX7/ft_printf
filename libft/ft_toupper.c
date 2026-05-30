/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:54:39 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 14:54:40 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

// #include <ctype.h>
// #include <stdio.h>
// int main()
// {
// 	printf("toupper libc: >%c<\n", toupper('a'));
// 	printf("toupper lift: >%c<\n\n", ft_toupper('a'));
// 	printf("toupper libc: >%c<\n", toupper('A'));
// 	printf("toupper lift: >%c<\n\n", ft_toupper('A'));
// 	printf("toupper libc: >%c<\n", toupper('1'));
// 	printf("toupper lift: >%c<\n", ft_toupper('1'));
// 	return 0;
// }
