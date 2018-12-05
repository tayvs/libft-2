/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 16:07:24 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/18 16:07:25 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	idx;

	if (!s)
		return (NULL);
	idx = 0;
	dest = ft_strnew(len);
	if (!dest)
		return (dest);
	while (idx < len)
	{
		dest[start + idx] = s[start + idx];
		idx++;
	}
	return (dest);
}
