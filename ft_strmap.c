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
	int		size;
	char	*dest;

	size = ft_strlen((char *)s);
	dest = ft_strnew(size);
	while (size > 0)
	{
		dest[size - 1] = f(s[size - 1]);
		size--;
	}
	return (dest);
}
