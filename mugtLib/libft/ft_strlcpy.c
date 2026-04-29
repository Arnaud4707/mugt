/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:56:53 by gmanique          #+#    #+#             */
/*   Updated: 2024/11/13 18:36:07 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	size_str;

	size_str = ft_strlen(s2);
	if (size == 0)
		return (size_str);
	i = 0;
	while (s2[i] && i < size - 1)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (size_str);
}

/*#include <stdio.h>
int main()
{
	char	dest[10] = "aaaaaaaaaa";
	printf("%d\n", ft_strlcpy(dest, "aaaaa", ft_strlen("aaaaa")));
	printf("%s\n", "aaaaa");
	printf("%s\n", dest);

	return 0;
}*/
