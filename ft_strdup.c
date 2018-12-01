/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 18:55:17 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/11 18:55:26 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*dup;

	dup = malloc(ft_strlen(str) + 1);
	if (!dup)
		return (NULL);
	ft_strcpy(dup, str);
	return (dup);
}
