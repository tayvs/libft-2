/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:48:37 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/26 19:48:38 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		put_pos_nbr(-n);
	}
	else
		put_pos_nbr(n);
}

void	static put_pos_nbr(unsigned int n)
{
	if (n >= 10)
		put_pos_nbr(n / 10);
	ft_putchar('0' + n % 10);
}