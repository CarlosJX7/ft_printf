/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:35:48 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 19:35:49 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_create_str(int n, size_t len)
{
	char	*str;
	size_t	i;
	long	nbr;

	i = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	nbr = (long)n;
	if (nbr < 0)
	{
		nbr *= -1;
		str[i] = '-';
		i++;
	}
	str[len] = '\0';
	len--;
	while (nbr > 0)
	{
		str[len] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	return (str);
}

static size_t	ft_int_len(long n)
{
	size_t	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	if (n == 0)
	{
		str = malloc(2);
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	len = ft_int_len(n);
	return (ft_create_str(n, len));
}

// #include <stdio.h>
// #include <limits.h>
// int main(void)
// {
// 	printf(">%s<\n", ft_itoa(INT_MAX));
// 	printf(">%s<\n", ft_itoa(0));
// 	printf(">%s<\n", ft_itoa(INT_MIN));
// 	return 0;
// }