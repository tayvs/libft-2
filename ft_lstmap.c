/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 20:18:44 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/30 20:18:46 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*iter;

	if (!lst || !f)
		return (NULL);
	res = f(lst);
	iter = res;
	lst = lst->next;
	while (lst)
	{
		iter->next = f(lst);
		iter = iter->next;
		lst = lst->next;
	}
	return (res);
}
