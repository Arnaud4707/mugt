/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <gmanique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:06:17 by gmanique          #+#    #+#             */
/*   Updated: 2025/03/11 06:55:12 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

static int	aff_negat(int fd, int nb)
{
	int		aff;
	char	tiret;
	char	c;
	int		rep;

	rep = 0;
	if (nb > -10)
	{
		tiret = '-';
		write(fd, &tiret, 1);
		rep = 1;
	}
	aff = (nb % 10) * (-1);
	c = aff + '0';
	write(fd, &c, 1);
	return (rep);
}

int	prft_putnbr(int fd, int nb)
{
	int		aff;
	char	c;
	int		rep;

	rep = 1;
	if (nb > 9 || nb < -9)
		rep += prft_putnbr(fd, nb / 10);
	if (nb >= 0)
	{
		aff = nb % 10;
		c = aff + '0';
		write(fd, &c, 1);
	}
	else
		rep += aff_negat(fd, nb);
	return (rep);
}
