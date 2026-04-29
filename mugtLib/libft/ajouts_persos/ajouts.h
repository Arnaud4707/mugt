/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ajouts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <gmanique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 02:04:19 by gmanique          #+#    #+#             */
/*   Updated: 2025/03/12 18:51:17 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AJOUTS_H
# define AJOUTS_H

# include "../libft.h"
# include "ft_fprintf/ft_fprintf.h"

# define ERROR 1

# define BLACK "\033[0;30m"
# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define CYAN "\033[0;36m"
# define PURPLE "\033[0;35m"
# define WHITE "\033[0;37m"
# define BOLD_BLACK "\033[1;30m"
# define BOLD_GREEN "\033[1;32m"
# define BOLD_RED "\033[1;31m"
# define BOLD_YELLOW "\033[1;33m"
# define BOLD_BLUE "\033[1;34m"
# define BOLD_CYAN "\033[1;36m"
# define BOLD_PURPLE "\033[1;35m"
# define BOLD_WHITE "\033[1;37m"
# define CLEAR "\033c"
# define RESET_COLOR "\e[m"

/* Renvoie la valeur absolue de l'entier passe en parametre. */
long long int		ft_abs(long long int val);

/* Renvoie la valeur absolue du double passe en parametre. */
double				db_abs(double val);

/* Permet de free un char ** */
void				free_split(char **s);

/* Ecrit en binaire la valeur de l'entier passe en parametre. */
void				print_bits(unsigned long long int val);

/* Convertit une chaine de caractere en double. */
double				ft_atod(const char *str);

#endif
