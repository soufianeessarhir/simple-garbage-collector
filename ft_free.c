/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 01:08:46 by sessarhi          #+#    #+#             */
/*   Updated: 2024/06/29 01:24:39 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"

void    ft_free(t_list **lst, void (*del)(void*))
{
    t_list  *tmp;

    if (!*lst || !del)
        return ;
    while (*lst)
    {
        tmp = (*lst)->next;
        del((*lst)->ptr);
        free(*lst);
        *lst = tmp;
    }
}

