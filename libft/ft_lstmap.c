/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:39:49 by smtolo            #+#    #+#             */
/*   Updated: 2017/08/31 16:39:55 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new_lst;
	t_list		*prev_lst;

	if (!(lst))
		return (NULL);
	new_lst = ft_lstnew(lst->content, lst->content_size);
	if (!(new_lst))
		return (NULL);
	new_lst = f(lst);
	prev_lst = new_lst;
	while (lst->next)
	{
		prev_lst->next = f(lst->next);
		prev_lst = prev_lst->next;
		lst = lst->next;
	}
	return (new_lst);
}
