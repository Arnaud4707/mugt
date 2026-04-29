/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:57:14 by gmanique          #+#    #+#             */
/*   Updated: 2024/11/12 18:01:10 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	if ((unsigned char)c == 0)
		return (str + ft_strlen(s));
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}
