/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 16:33:08 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/17 16:33:10 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	idx;

	idx = 0;
	while (s[idx])
	{
		if (s[idx] == c)
			return ((char *)&s[idx]);
		idx++;
	}
	if (s[idx] == c)
		return ((char *)&s[idx]);
	return (NULL);
}
