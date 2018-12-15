/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 19:40:23 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/11 19:40:24 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_l;
	size_t src_l;
	size_t idx;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen((char *)src);
	idx = 0;
	while (dst_l + idx + 1 < dstsize && src[idx])
	{
		dst[dst_l + idx] = src[idx];
		idx++;
	}
	dst[dst_l + idx] = '\0';
	if (dstsize < dst_l)
		return (dstsize + src_l);
	else
		return (dst_l + src_l);
}
