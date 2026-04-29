/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:29:23 by gmanique          #+#    #+#             */
/*   Updated: 2024/11/14 17:29:24 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*#include <stdio.h>
int main()
{
	t_list	*test;
	t_list    *one;
    t_list    *two;
    int    i[3] = {1, 2, 3};

	one = ft_lstnew(&i[0]);
    two = ft_lstnew(&i[1]);
	test = ft_lstnew(&i[2]);

	ft_lstadd_front(&one, two);
	ft_lstadd_front(&test, one);

	t_list *test2 = ft_lstlast(test);
	printf("%d", *(int *)test2->content);
}*/