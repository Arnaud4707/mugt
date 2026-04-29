/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmanique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:59:31 by gmanique          #+#    #+#             */
/*   Updated: 2024/11/13 19:30:53 by gmanique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cpt_words(const char *s, char c)
{
	int	i;
	int	cpt;

	cpt = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		cpt++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (cpt);
}

static int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	free_all(char **str, int word)
{
	while (word > 0)
	{
		free(str[word - 1]);
		word--;
	}
	free(str);
}

static char	**mal_all(char const *s, char c, int letter, int i)
{
	char	**mall;

	mall = malloc((cpt_words(s, c) + 1) * sizeof(char *));
	if (mall == NULL)
		return (NULL);
	while (s[letter] && s[letter] == c)
		letter++;
	while (s[letter] && i < cpt_words(s, c))
	{
		mall[i] = malloc((word_len(&s[letter], c) + 1) * sizeof(char));
		if (mall[i] == NULL)
			return (free_all(mall, i), NULL);
		i++;
		letter += word_len(&s[letter], c);
		while (s[letter] == c)
			letter++;
	}
	return (mall);
}

char	**ft_split(char const *s, char c)
{
	char	**rep;
	int		word;
	int		i;

	word = 0;
	i = 0;
	rep = mal_all(s, c, i, word);
	if (rep == NULL)
		return (NULL);
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && word < cpt_words(s, c))
	{
		ft_strlcpy(rep[word], &s[i], word_len(&s[i], c) + 1);
		i += word_len(&s[i], c);
		while (s[i] == c)
			i++;
		word++;
	}
	rep[word] = NULL;
	return (rep);
}

/*#include <stdio.h>
int	main(void)
{
	char	**result;
	int cpt;
	result = ft_split("hello!", ' ');
	for (int i = 0; result[i]; i++)
	{
		printf("%s\n", result[i]);
		cpt = i;
	}
	printf("%s\n", result[cpt+1]);

	for (int i = 0; result[i]; i++)
		free(result[i]);
	free(result);
}*/