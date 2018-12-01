/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 18:09:44 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/11 18:09:48 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*uc_dst;
	unsigned char	*uc_src;
	unsigned char	uc_c;

	i = 0;
	uc_c = (unsigned char)c;
	uc_dst = (unsigned char *)dst;
	uc_src = (unsigned char *)src;
	while (i < n)
	{
		uc_dst[i] = uc_src[i];
		if (uc_src[i] == uc_c)
			return (&uc_dst[i + 1]);
		i++;
	}
	return (NULL);
}
