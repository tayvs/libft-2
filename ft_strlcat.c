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

	dst_l = ft_strlen(dst);
	src_l = ft_strlen((char *)src);
	ft_strncat(&dst[dst_l], src, dstsize - dst_l - 1);
	if (dst_l + src_l > dstsize)
		dst[dstsize - 1] = '\0';
	else
		dst[dst_l + src_l] = '\0';
	return (dst_l + src_l);
}
