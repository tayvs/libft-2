/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 16:49:26 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/18 16:49:28 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_white(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	int		l_offset;
	int		r_offset;
	int		s_len;
	char	*dest;

	if (!s)
		return (NULL);
	l_offset = 0;
	r_offset = 0;
	s_len = ft_strlen(s);
	while (s[l_offset] && is_white(s[l_offset]))
		l_offset++;
	if (l_offset >= s_len)
		return (ft_strnew(1));
	while (is_white(s[s_len - 1 - r_offset]))
		r_offset++;
	dest = ft_strnew(s_len - l_offset - r_offset);
	if (!dest)
		return (NULL);
	ft_strncpy(dest, s + l_offset, s_len - l_offset - r_offset);
	return (dest);
}
