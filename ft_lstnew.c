/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 19:50:25 by sstoliar          #+#    #+#             */
/*   Updated: 2018/11/30 19:50:37 by sstoliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*res;

	res = ft_memalloc(sizeof(t_list));
	if (!res)
		return (res);
	res->content = content;
	res->next = NULL;
	if (content == NULL)
		content_size = 0;
	res->content_size = content_size;
	return (res);
}
