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
	iter = f(lst);
	res = iter;
	lst = lst->next;
	while (lst)
	{
		iter = f(lst);
		iter
		iter = iter->next;
		lst = lst->next;
	}
	return (res);
}
