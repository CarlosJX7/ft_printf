/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:43:35 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 19:43:41 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <unistd.h>
// void ft_print_str(char *str)
// {
// 	int i = 0;
// 	while (str[i])
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// }
// void ft_print(unsigned int i, char *str)
// {
// 	char c = i + '0';
// 	write(1, &c, 1);
// 	write(1, "\n", 1);
// 	ft_print_str(str);
// 	write(1, "\n", 1);
// }
// int main(void)
// {
// 	char *str = "Hello World";
// 	ft_striteri(str, &ft_print);
// 	return 0;
// }