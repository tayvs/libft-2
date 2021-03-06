/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 15:39:06 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/18 15:39:07 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 != !s2)
		return (0);
	else if ((!s1 && !s2) || ft_strncmp(s1, s2, n) == 0)
		return (1);
	else
		return (0);
}
