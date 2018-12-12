/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_str_print.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 19:05:51 by sstoliar          #+#    #+#             */
/*   Updated: 2018/12/11 19:05:52 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_str_print(t_list *lst)
{
	while (lst)
	{
		ft_putendl((char *)lst->content);
		lst = lst->next;
	}
}
