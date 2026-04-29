/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <gmanique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:09:58 by gmanique          #+#    #+#             */
/*   Updated: 2025/03/11 06:55:07 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

int	prft_puthexa(int fd, unsigned int nb)
{
	int		aff;
	char	c;
	int		rep;

	rep = 1;
	if (nb > 15)
		rep += prft_puthexa(fd, nb / 16);
	aff = nb % 16;
	if (aff < 10)
		c = aff + '0';
	else
		c = (aff % 10) + 'a';
	write(fd, &c, 1);
	return (rep);
}
