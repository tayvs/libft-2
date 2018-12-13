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

static int	digits(int n)
{
	int num;

	num = 1;
	while (n / 10 != 0 && ++num)
	{
		n /= 10;
	}
	return (num);
}

char		*ft_itoa(int n)
{
	int		str_len;
	char	*str;
	int		is_neg;
	int		idx;

	str_len = 0;
	is_neg = 0;
	idx = 0;
	if (n < 0)
		is_neg = 1;
	str_len = digits(n) + is_neg;
	str = ft_strnew(str_len);
	if (!str)
		return (NULL);
	if (is_neg)
	{
		str[idx++] = '-';
	}
	idx = str_len - 1;
	while (idx - is_neg >= 0)
	{
		str[idx--] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	return (str);
}
