/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:56:21 by gmanique          #+#    #+#             */
/*   Updated: 2024/11/12 11:56:55 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*#include <string.h>
#include <stdio.h>
int main()
{
	char	s1[50] = "Oeoeoeoeoe";
	char	s2[50] = "Oeoeoeoeoe";

	ft_memset(s1, 50, 5);
	memset(s2, 50, 5);
	printf("%s", s1);
	printf("%s", s2);
	return 0;
}*/
