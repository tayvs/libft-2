/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 16:14:18 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/18 16:14:19 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define D_ERROR	{ printf("Error Line %d, Funct %s ", __LINE__ - 1, __func__); return (0); }

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		s1_size;
	int		s2_size;

	if (!s1 || !s2)
		return (NULL);
	s1_size = ft_strlen((char *)s1);
	s2_size = ft_strlen((char *)s1);
	dest = ft_strnew(s1_size + s2_size + 1);
	if (!dest)
		return (NULL);
	ft_strcpy(dest, s1);
	ft_strcpy(&dest[s1_size], s2);
	return (dest);
}
