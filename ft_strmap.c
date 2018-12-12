/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 15:25:04 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/18 15:25:06 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	idx;
	char	*dest;

	if (!s || !f)
		return (NULL);
	dest = ft_strnew(ft_strlen((char *)s));
	if (!dest)
		return (NULL);
	idx = 0;
	while (s[idx])
	{
		dest[idx] = f(s[idx]);
		idx++;
	}
	return (dest);
}
