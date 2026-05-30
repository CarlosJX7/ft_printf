/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:51:31 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/25 17:51:34 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// #include <stdio.h>
// t_list *create_test_list(void)
// {
// 	char *content = "Hola mundo";
// 	t_list *n1 = ft_lstnew((void *)content);
// 	t_list *n2 = ft_lstnew((void *)content);
// 	t_list *n3 = ft_lstnew((void *)content);

// 	n1->next = n2;
// 	n2->next = n3;
// 	n3->next = NULL;
// 	return n1;
// }
// int main(void)
// {
// 	t_list *lst = create_test_list();
// 	printf("Tamaño de la lista: %d\n", ft_lstsize(lst));
// 	ft_lstclear(&lst, NULL); // content es char *
// 	return 0;
// }