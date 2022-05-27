/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:50:40 by rel-hach          #+#    #+#             */
/*   Updated: 2021/11/28 20:33:16 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;

	head = NULL;
	node = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			head = node;
			ft_lstclear(&head, del);
			return (lst);
		}
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}
