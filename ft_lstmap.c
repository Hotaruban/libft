/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurpy <jhurpy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:38:35 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/04 21:55:52 by jhurpy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_lstmap creat a new list.
The new nodes are creat with function ft_lstnew and ft_strdup to creat the memory in malloc,
then passed in function pointed by f, and the memory is free in function ft_lstclear
and with the function pointed by del.
*/

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new_list;

	new_list = (*f)(ft_lstnew(lst->content));
	temp = new_list;
	while (lst != NULL)
	{
		lst = lst->next;
		temp->next = ft_lstnew(ft_strdup((*f)(lst->content)));
			if (temp->next == NULL)
			{
				ft_lstclear(&new_list,del);
				return (NULL);
			}
		temp = temp->next;
	}
	return (NULL);
}
