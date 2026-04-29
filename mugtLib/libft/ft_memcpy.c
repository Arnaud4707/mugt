/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:56:37 by gmanique          #+#    #+#             */
/*   Updated: 2024/11/13 18:34:42 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t	i;

	i = 0;
	if (dest == (void *)0 && src == (void *)0)
		return (NULL);
	while (i < size)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
int main()
{
	char	dest[50] = "zzzzzzzzz";
	const char	*src = "abc";
	ft_memcpy(dest, src, 3);
	printf("%s\n", dest);
	return 0;
}*/
