/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:01:55 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/26 20:01:58 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putchar_fd(int c, int fd)
{
	unsigned char	bytes[4];

	if (c >= 128)
	{
		bytes[0] = (c >> 24) & 0xFF;
		bytes[1] = (c >> 16) & 0xFF;
		bytes[2] = (c >> 8) & 0xFF;
		bytes[3] = c & 0xFF;
		return (write(fd, bytes, 4));
	}
	return (write(fd, &c, 1));
}
