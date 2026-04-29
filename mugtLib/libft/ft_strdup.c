/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:58:36 by gmanique          #+#    #+#             */
/*   Updated: 2024/11/07 18:15:40 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char	*src)
{
	char	*rep;
	int		i;

	rep = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (rep == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		rep[i] = src[i];
		i++;
	}
	rep[i] = '\0';
	return (rep);
}
