/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 15:04:46 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/18 15:04:48 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	idx;

	idx = 0;
	str = (char *)ft_memalloc(size + 1);
	if (!str)
		return (NULL);
	while (idx <= size)
	{
		str[idx] = '\0';
		idx++;
	}
	return (str);
}
