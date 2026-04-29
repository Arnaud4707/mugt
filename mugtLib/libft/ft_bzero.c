/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:56:29 by gmanique          #+#    #+#             */
/*   Updated: 2024/11/13 18:31:59 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*#include <strings.h>
#include <stdio.h>
int main()
{
	char	tab1[50] = "abcdefghij";
	char	tab2[50] = "abcdefghij";

	
	printf("%s\n", tab1);
	ft_bzero(tab1, 5);
	printf("%s\n", tab1);
	printf("%s\n", tab2);
	bzero(tab2, 5);
	printf("%s\n", tab2);
}*/
