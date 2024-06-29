/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 00:50:15 by sessarhi          #+#    #+#             */
/*   Updated: 2024/06/29 01:17:25 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"
void *ft_malloc(size_t size, t_list **lst)
{
    t_list	*new;

    new = ft_lstnew(malloc(size));
    if (!new)
        return (NULL);
    ft_lstadd_back(lst, new);
    return (new->ptr);
}