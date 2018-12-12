/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 19:24:02 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/11 19:24:04 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t s1_len;
	size_t idx;

	s1_len = ft_strlen(s1);
	idx = 0;
	while (idx < n && s2[idx])
	{
		s1[s1_len + idx] = s2[idx];
		idx++;
	}
	s1[s1_len + idx] = 0;
	return (s1);
}
