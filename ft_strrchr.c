/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 16:40:04 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/17 16:40:06 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int idx;

	idx = ft_strlen((char *)s);
	while (idx >= 0)
	{
		if (s[idx] == c)
			return ((char *)&s[idx]);
		idx--;
	}
	return (NULL);
}
