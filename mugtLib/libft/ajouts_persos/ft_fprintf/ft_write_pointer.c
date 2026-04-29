/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <gmanique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:12:20 by gmanique          #+#    #+#             */
/*   Updated: 2025/03/11 06:55:25 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

static int	ft_putulhexa(int fd, unsigned long int nb)
{
	unsigned int	aff;
	char			c;
	int				rep;

	rep = 1;
	if (nb > 15)
		rep += ft_putulhexa(fd, nb / 16);
	aff = nb % 16;
	if (aff < 10)
		c = aff + '0';
	else
		c = (aff % 10) + 'a';
	write(fd, &c, 1);
	return (rep);
}

int	prft_write_pointer(int fd, void *p)
{
	if (!p)
		return (prft_putstr(fd, "(nil)"));
	prft_putstr(fd, "0x");
	return (ft_putulhexa(fd, (unsigned long int)p) + 2);
}
