/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:00:26 by gmanique          #+#    #+#             */
/*   Updated: 2024/11/11 12:45:13 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	nl;

	i = 0;
	nl = '\n';
	if (fd < 0)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &nl, 1);
}

/*#include <fcntl.h>
int main()
{
	int fd = open("test.txt", O_WRONLY);
	ft_putendl_fd("test1212", fd);
	ft_putendl_fd("test1212", fd);
	return 0;
}*/
