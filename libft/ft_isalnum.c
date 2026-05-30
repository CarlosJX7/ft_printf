/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:53:36 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 14:53:37 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <ctype.h>
// #include <stdio.h>
// int main(void)
// {
// 	printf("libc: %d\n", isalnum('a'));
// 	printf("libt: %d\n\n", ft_isalnum('a'));
// 	printf("libc: %d\n", isalnum('A'));
// 	printf("libt: %d\n\n", ft_isalnum('A'));
// 	printf("libc: %d\n", isalnum('1'));
// 	printf("libt: %d\n\n", ft_isalnum('1'));
// 	printf("libc: %d\n", isalnum('!'));
// 	printf("libt: %d\n\n", ft_isalnum('!'));
// 	return 0;
// }
