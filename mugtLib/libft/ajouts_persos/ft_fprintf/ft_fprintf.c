/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <gmanique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:18:05 by gmanique          #+#    #+#             */
/*   Updated: 2025/03/11 07:01:18 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

void	prft_putchar(int fd, int c)
{
	write(fd, &c, 1);
}

static int	write_param(int fd, char c, va_list ap)
{
	if (c == '%')
		write(fd, &c, 1);
	else if (c == 'c')
		prft_putchar(fd, va_arg (ap, int));
	else if (c == 's')
		return (prft_putstr(fd, va_arg(ap, char *)));
	else if (c == 'p')
		return (prft_write_pointer(fd, va_arg(ap, void *)));
	else if (c == 'd' || c == 'i')
		return (prft_putnbr(fd, va_arg (ap, int)));
	else if (c == 'u')
		return (prft_put_unsigned_nbr(fd, va_arg (ap, unsigned int)));
	else if (c == 'x')
		return (prft_puthexa(fd, va_arg (ap, unsigned int)));
	else if (c == 'X')
		return (prft_putbhexa(fd, va_arg (ap, unsigned int)));
	return (1);
}

int	ft_fprintf(int fd, const char *str, ...)
{
	int		i;
	va_list	ap;
	int		rep;

	rep = 0;
	i = 0;
	va_start(ap, str);
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] != '%')
		{
			write(fd, &str[i++], 1);
			rep += 1;
		}
		else
		{
			rep += write_param(fd, str[i + 1], ap);
			i += 2;
		}
	}
	va_end(ap);
	return (rep);
}

/*#include <stdio.h>
int main()
{
	
	int aaa = 15;
	int *point = &aaa;
	printf("Resultat attendu : \t%c\n", 'Z');
	ft_printf("Resultat obtenu : \t%c\n\n", 'Z');
	printf("Resultat attendu : \t%p\n", point);
	ft_printf("Resultat obtenu : \t%p\n\n", point);
	printf("Resultat attendu : \t%d%i\n", aaa, 42);
	ft_printf("Resultat obtenu : \t%d%i\n\n", aaa, 42);
	printf("Resultat attendu : \t%s\n", "test");
	ft_printf("Resultat obtenu : \t%s\n\n", "test");
	printf("Resultat attendu : \t%x\n", 1234);
	ft_printf("Resultat obtenu : \t%x\n\n", 1234);
	printf("Resultat attendu : \t%X\n", 1234);
	ft_printf("Resultat obtenu : \t%X\n\n", 1234);
	printf("Resultat attendu : \t%%\n");
	ft_printf("Resultat obtenu : \t%%\n\n");
	return 0;
}*/
