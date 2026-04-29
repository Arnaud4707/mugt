/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <gmanique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:04:54 by gmanique          #+#    #+#             */
/*   Updated: 2025/03/12 18:52:14 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FPRINTF_H
# define FT_FPRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		prft_put_unsigned_nbr(int fd, unsigned int nb);
int		prft_putbhexa(int fd, unsigned int nb);
int		prft_puthexa(int fd, unsigned int nb);
int		prft_write_pointer(int fd, void *p);
// int		write_param(int fd, char c, va_list ap);
int		prft_putstr(int fd, char *str);
/* Ft_printf mais sur le fd donne. */
int		ft_fprintf(int fd, const char *str, ...);
int		prft_putnbr(int fd, int nb);
void	prft_putchar(int fd, int c);

#endif