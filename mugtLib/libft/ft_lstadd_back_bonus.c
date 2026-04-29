/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:29:35 by gmanique          #+#    #+#             */
/*   Updated: 2024/11/14 17:29:36 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tampon;

	if (!new)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		tampon = *lst;
		while (tampon->next)
		{
			tampon = tampon->next;
		}
		tampon->next = new;
	}
}

/*#include <stdio.h>
int	main()
{
	t_list *lst1;
	t_list *lst2;
	t_list *lst3;
	t_list *lst4;
	t_list *lst5;

	int		i[5] = {1, 2, 3, 4, 5};
	lst1 = ft_lstnew(&i[0]);
	lst2 = ft_lstnew(&i[1]);
	lst3 = ft_lstnew(&i[2]);	
	lst4 = ft_lstnew(&i[3]);
	lst5 = ft_lstnew(&i[4]);

	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst2, lst3);
	ft_lstadd_back(&lst3, lst4);
	ft_lstadd_back(&lst4, lst5);
	while(lst1)
	{
		printf("%d", *(int *)lst1->content);
		lst1 = lst1->next;
	}
}*/