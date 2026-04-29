/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:29:13 by gmanique          #+#    #+#             */
/*   Updated: 2024/11/14 17:29:14 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cpt;

	cpt = 0;
	while (lst)
	{
		cpt++;
		lst = lst->next;
	}
	return (cpt);
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

	printf("%d\n", ft_lstsize(test));
}*/