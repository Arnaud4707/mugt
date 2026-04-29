/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <gmanique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:07:53 by gmanique          #+#    #+#             */
/*   Updated: 2025/03/11 06:55:16 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

int	prft_putstr(int fd, char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (prft_putstr(fd, "(null)"));
	while (str[i])
		write(fd, &str[i++], 1);
	return (i);
}
