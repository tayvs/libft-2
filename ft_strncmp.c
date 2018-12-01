/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 16:54:08 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/17 16:54:10 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t idx;

	idx = 0;
	while (idx < len && s1[idx] && s2[idx] && s1[idx] == s2[idx])
		idx++;
	return (s1[idx] - s2[idx]);
}
