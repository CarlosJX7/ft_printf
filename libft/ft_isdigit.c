/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:54:12 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 14:54:14 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// #include <ctype.h>
// #include <stdio.h>
// int main(void)
// {
// 	printf("libt: >%d<\n", ft_isdigit('a'));
// 	printf("libc: >%d<\n\n", ft_isdigit('a'));
// 	printf("libt: >%d<\n", ft_isdigit('1'));
// 	printf("libc: >%d<\n", ft_isdigit('1'));
// 	return 0;
// }
