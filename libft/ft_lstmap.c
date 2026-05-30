/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlinaq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 18:43:05 by carlinaq          #+#    #+#             */
/*   Updated: 2026/05/25 18:43:06 by carlinaq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstmap_error(t_list **lst, void (*del)(void *),
		void *content)
{
	if (content)
		del(content);
	ft_lstclear(lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	if (!f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
			return (ft_lstmap_error(&new_lst, del, new_content));
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
