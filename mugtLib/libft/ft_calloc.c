/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:58:27 by gmanique          #+#    #+#             */
/*   Updated: 2024/11/13 18:32:24 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*rep;
	size_t	len;

	len = elementSize * elementCount;
	if ((int)len < 0 || ((int)elementSize < 0 && (int)elementCount < 0))
		return (NULL);
	rep = (void *)malloc(len);
	if (!rep)
		return (NULL);
	ft_memset(rep, 0, len);
	return (rep);
}

/*#include <stdio.h>
int main()
{
	char *str = ft_calloc(10 * sizeof(char));
	if (str == NULL)
		return (0);
	for(int i = 0; i < 15; i++)
		str[i] = 'a'+i;
	printf("%s", str);
	free(str);
	return 0;
}*/
