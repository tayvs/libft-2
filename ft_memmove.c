/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 18:31:02 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/11 18:31:04 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*uc_dst;
	unsigned char	*uc_src;

	i = 0;
	uc_dst = (unsigned char *)dst;
	uc_src = (unsigned char *)src;
	while (i < len)
	{
		uc_dst[i] = uc_src[i];
		i++;
	}
	return (dst);
}
