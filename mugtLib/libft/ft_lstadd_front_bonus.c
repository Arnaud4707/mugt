/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:29:04 by gmanique          #+#    #+#             */
/*   Updated: 2024/11/14 17:29:06 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*#include <stdio.h>
int    main()
{
    t_list    *one;
    t_list    *two;
    int    i[2] = {1, 2};

    one = ft_lstnew(&i[0]);
    two = ft_lstnew(&i[1]);
    printf("this is one : %d\n", *(int *)one->content);

    ft_lstadd_front(&one, two);
    while(one)
    {
        printf("this is int : %d\n", *(int *)one->content);    
        one = one->next;
    }
}*/