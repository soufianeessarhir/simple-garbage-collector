/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:58:15 by sessarhi          #+#    #+#             */
/*   Updated: 2024/06/29 01:05:53 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->ptr = content;
	head->next = NULL;
	return (head);
}
