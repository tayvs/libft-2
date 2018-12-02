/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 20:30:12 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/30 20:30:14 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		count;

	while (*s == c)
		s++;
	if (!*s)
		return (0);
	count = 1;
	while (*s)
	{
		if (*s == c)
		{
			while (*s == c)
				s++;
			if (*s)
				count++;
			else
				return (count);
		}
		s++;
	}
	return (count);
}

static char	*get_word(char **s, char c)
{
	size_t	word_e;
	char	*str;
	char	*res;

	str = (char *)*s;
	if (!*s || !**s)
		return (NULL);
	word_e = 0;
	while (str[word_e] && str[word_e] != c)
		word_e++;
	res = ft_strncpy(ft_strnew(word_e), str, word_e);
	*s += word_e;
	return (res);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		word_idx;

	if (!s ||
		!(words = (char **)malloc(((count_words(s, c)) + 1) * sizeof(char **))))
		return (NULL);
	word_idx = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			words[word_idx] = get_word((char **)&s, c);
			word_idx++;
		}
	}
	words[word_idx] = NULL;
	return (words);
}
