/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 15:31:06 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/18 15:31:08 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	idx;
	unsigned int	size;
	char			*dest;

	size = ft_strlen((char *)s);
	dest = ft_strnew(size);
	idx = 0;
	while (idx < size)
	{
		dest[idx] = f(idx, s[idx]);
		idx++;
	}
	return (dest);
}
