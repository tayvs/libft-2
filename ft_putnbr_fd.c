/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:06:38 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/26 20:06:39 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		put_pos_nbr_fd(-n, fd);
	}
	else
		put_pos_nbr_fd(n, fd);
}

void	static put_pos_nbr_fd(unsigned int n, int fd)
{
	if (n >= 10)
		put_pos_nbr_fd(n / 10, fd);
	ft_putchar_fd('0' + n % 10, fd);
}
