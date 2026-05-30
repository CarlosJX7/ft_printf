/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:37:07 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 19:37:10 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s && s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
// int main(void)
// {
// 	ft_putstr_fd("fd = 1", 1);
// 	ft_putstr_fd("fd = 2", 2);
// 	return 0;
// }