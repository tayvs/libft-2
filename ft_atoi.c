/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 17:03:55 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/17 17:03:56 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define STREQ(c) str[idx] == c

int		ft_atoi(const char *str)
{
	int		idx;
	long	num;
	int		sign;

	idx = 0;
	num = 0;
	sign = 1;
	while (STREQ('\n') || STREQ('\f') || STREQ('\r') ||
		STREQ(' ') || STREQ('\t') || STREQ('\f') || STREQ('\v'))
		idx++;
	if (STREQ('-') || STREQ('+'))
	{
		if (STREQ('-'))
			sign = -1;
		idx++;
	}
	while (ft_isdigit(str[idx]))
	{
		num = num * 10 + sign * (str[idx] - '0');
		idx++;
	}
	return (int)(num);
}
