/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 06:17:07 by sessarhi          #+#    #+#             */
/*   Updated: 2024/06/29 01:05:01 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*frst;
	t_list	*s;
	void	*content;

	s = NULL;
	if (!lst || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->ptr);
		frst = ft_lstnew(content);
		if (!frst)
		{
			del(content);
			if (s)
				ft_lstclear(&s, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&s, frst);
	}
	return (s);
}
