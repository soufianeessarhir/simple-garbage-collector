/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 00:53:42 by sessarhi          #+#    #+#             */
/*   Updated: 2024/06/29 01:35:50 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef GC_H
# define GC_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
 void *ptr;
    struct s_list *next;
}				t_list;

void    ft_lstadd_front(t_list **lst, t_list *new);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstiter(t_list *lst, void (*f)(void *));
void    ft_lstclear(t_list **lst, void (*del)(void *));
t_list  *ft_lstnew(void *content);
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void    ft_lstdelone(t_list *lst, void (*del)(void *));
int     ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);
void    ft_free(t_list **lst, void (*del)(void*));
void    *ft_malloc(size_t size, t_list **lst);

#endif