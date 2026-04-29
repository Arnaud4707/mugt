/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abs.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <gmanique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 02:05:07 by gmanique          #+#    #+#             */
/*   Updated: 2025/03/19 22:39:13 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ajouts.h"

long long int	ft_abs(long long int val)
{
	if (val < 0)
		return (-val);
	return (val);
}

double	db_abs(double val)
{
	if (val < 0)
		return (-val);
	return (val);
}
