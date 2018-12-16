/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 17:02:01 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/17 17:02:03 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	idx;
	size_t	h_len;
	size_t	n_len;

	idx = 0;
	n_len = ft_strlen(needle);
	if (n_len == 0)
		return (char *)(haystack);
	h_len = ft_strlen(haystack);
	if (h_len == 0 || n_len > h_len || len < n_len)
		return (NULL);
	while (haystack[idx] && idx + n_len - 1 < len)
	{
		if (ft_strncmp(haystack + idx, needle, n_len) == 0)
			return (char *)(haystack + idx);
		idx++;
	}
	return (NULL);
}
