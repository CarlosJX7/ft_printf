/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:57:57 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 18:57:59 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	else
		return (0);
}

static int	ft_is_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int		n;
	size_t	i;
	int		sign;

	i = 0;
	sign = 1;
	n = 0;
	while (ft_isspace(str[i]))
		i++;
	if (ft_is_sign(str[i]))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	char *str = "    -1234abc123";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n\n", atoi(str));
// 	str = "    +1234abc123";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n\n", atoi(str));
// 	str = "    -+1234abc123";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n\n", atoi(str));
// 	str = "    12@34abc123";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n\n", atoi(str));
// 	str = "";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// 	return 0;
// }