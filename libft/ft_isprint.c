/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:44:25 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 18:44:26 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// #include <ctype.h>
// #include <stdio.h>
// int main(void)
// {
// 	int i;
// 	int libt, libc;

// 	i = -128;
// 	while (i <= 255)
// 	{
// 		libt = isprint((unsigned char)i);
// 		libc = ft_isprint(i);

// 		if ((libt != 0) != (libc != 0))
// 		{
// 			printf("Error en i=%d\n", i);
// 			printf("libc: %d\n", libt);
// 			printf("libt: %d\n", libc);
// 			return 1;
// 		}
// 		i++;
// 	}
// 	printf("Terminado sin errores\n");
// 	return 0;
// }
