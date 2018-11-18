/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 17:20:17 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/18 17:20:19 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		digits(int n)
{
	int num;
	int sub;

	num = 1;
	sub = 1;
	while (n / sub >= 10)
	{
		sub *= 10;
		num++;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	int		str_len;
	char	*str;
	int		isNeg;
	int 	idx;

	str_len = 0;
	isNeg = 0;
	idx = 0;
	if (n < 0)
		isNeg = 1;
	str_len += digits(n);
	str = ft_strnew(str_len + isNeg);
	if (isNeg)
		str[idx++] = '-';
	while (str[idx])
	{

		idx++;
	}
}