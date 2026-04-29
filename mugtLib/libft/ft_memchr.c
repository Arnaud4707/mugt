/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:57:47 by gmanique          #+#    #+#             */
/*   Updated: 2024/11/11 17:03:02 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t			i;
	unsigned char	c;

	c = (unsigned char)searchedChar;
	i = 0;
	while (i < size)
	{
		if (((unsigned char *)memoryBlock)[i] == c)
			return ((void *)((&memoryBlock)[i]));
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
int	main()
{
	char s[50] = "Oeoeoegang";
	char c = 'g';
	printf("%s\n", (char *)ft_memchr(s, c, 10));
	return 0;
}*/
