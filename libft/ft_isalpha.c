/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:53:46 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 18:54:30 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// #include <ctype.h>
// #include <stdio.h>
// int main(void)
// {
// 	printf("libc: %d\n", isalpha('a'));
// 	printf("libt: %d\n\n", ft_isalpha('a'));
// 	printf("libc: %d\n", isalpha('A'));
// 	printf("libt: %d\n\n", ft_isalpha('A'));
// 	printf("libc: %d\n", isalpha('!'));
// 	printf("libt: %d\n\n", ft_isalpha('!'));
// 	return 0;
// }
