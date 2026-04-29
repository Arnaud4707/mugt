/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <gmanique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:29:43 by gmanique          #+#    #+#             */
/*   Updated: 2025/03/19 22:41:21 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		ft_gnlstrlen(const char *s);
int		ft_gnlstrchr(char *s, int c);
char	*ft_gnlstrjoin(char const *s1, char const *s2);
char	*stock_extend(char *stock, char *buff);
int		get_line_len(char *s);
char	*read_till_nl(char *stock, int fd);
char	*get_precise_line(char *s);
char	*takeoff_line(char *s);
char	*get_next_line(int fd);

#endif