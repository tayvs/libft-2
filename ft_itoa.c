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

	num = 1;
	while (n / 10 > 0 && num++)
		n /= 10;
	return (num);
}


//TODO
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
	str_len = digits(n) + isNeg;
	str = ft_strnew(str_len);
	if (isNeg)
	{
		str[idx++] = '-';
		n *= -1;
	}
	idx = str_len - 1;
	while (idx - isNeg >= 0)
	{
		str[idx] = n % 10;
		n / 10;
		idx--;
	}
	return (str);
}