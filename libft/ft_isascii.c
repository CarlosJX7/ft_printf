/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:54:01 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 14:54:02 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	int i;

// 	i = -255;
// 	while (i < 256)
// 	{
// 		printf("i = %d, r_libc = %d, r_libt = %d\n", i,
// 			isascii(i), ft_isascii(i));
// 		i++;
// 	}
// 	return 0;
// }
