/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <gmanique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:08:59 by gmanique          #+#    #+#             */
/*   Updated: 2025/03/11 06:55:00 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

int	prft_put_unsigned_nbr(int fd, unsigned int nb)
{
	unsigned int	aff;
	char			c;
	int				rep;

	rep = 1;
	if (nb > 9)
		rep += prft_put_unsigned_nbr(fd, nb / 10);
	aff = nb % 10;
	c = aff + '0';
	write(fd, &c, 1);
	return (rep);
}
