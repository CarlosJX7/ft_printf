/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:36:54 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/18 19:36:56 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	nc;

	nbr = (long)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	nc = nbr % 10 + '0';
	ft_putchar_fd(nc, fd);
}

// int main(void)
// {
// 	ft_putnbr_fd(1234, 1);
// 	return 0;
// }