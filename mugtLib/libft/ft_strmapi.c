/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:47:42 by gmanique          #+#    #+#             */
/*   Updated: 2024/11/11 16:52:16 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*rep;

	rep = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (rep == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		rep[i] = f(i, s[i]);
		i++;
	}
	rep[i] = '\0';
	return (rep);
}

/*char toz(unsigned int i, char c)
{
	return 'z';
}

#include <stdio.h>
int main()
{
	printf("%s", ft_strmapi("12345", toz));
	return 0;
}*/
