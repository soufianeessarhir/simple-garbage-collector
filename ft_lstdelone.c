/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:57:26 by sessarhi          #+#    #+#             */
/*   Updated: 2024/06/29 01:04:12 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	if (!lst)
		return ;
	del(lst->ptr);
	free(lst);
}
