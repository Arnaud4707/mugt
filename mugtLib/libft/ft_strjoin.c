/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:59:13 by gmanique          #+#    #+#             */
/*   Updated: 2024/11/07 18:14:51 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rep;
	int		i;
	int		j;

	rep = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (rep == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		rep[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		rep[i + j] = s2[j];
		j++;
	}
	rep[i + j] = '\0';
	return (rep);
}
