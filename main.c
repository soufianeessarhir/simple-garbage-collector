/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 00:56:21 by sessarhi          #+#    #+#             */
/*   Updated: 2024/06/29 01:53:03 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*str;
	const unsigned char	*src1;

	i = 0;
	str = (unsigned char *)(dst); 
	src1 = (const unsigned char *)(src);
	if (dst == src)
		return (dst);
	while (i < n)
	{
		str[i] = src1[i]; 
		i++; 
	}
	return (dst);
}
void f()
{
    system("leaks gc");
}
int main(void)
{
    t_list *lst;
    int i;
    i = 0;
    lst = NULL;
    atexit(f);
    while (i < 1000)
    {
        ft_malloc(1000, &lst);
        i++;
    }
    ft_free(&lst, free);

    return 0;
}