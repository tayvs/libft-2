/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 16:44:54 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/17 16:44:55 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	idx;
	size_t	h_len;
	size_t	n_len;

	idx = 0;
	n_len = ft_strlen((char *)needle);
	if (n_len == 0)
		return ((char *)haystack);
	h_len = ft_strlen((char *)haystack);
	if (h_len == 0 || n_len > h_len)
		return (NULL);
	while (haystack[idx] && h_len - idx >= n_len)
	{
		if (ft_strncmp(&haystack[idx], needle, n_len) == 0)
			return ((char *)&haystack[idx]);
		idx++;
	}
	return (NULL);
}
