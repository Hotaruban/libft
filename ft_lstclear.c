/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurpy <jhurpy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:38:19 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/06 19:07:50 by jhurpy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_lstclear pass the node pointed by lst and the nodes after
to the function pointed by del, and free the memory of the nodes.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*node;

	temp = *lst;
	while (temp != NULL)
	{
		node = temp->next;
		del(temp->content);
		free(temp);
		temp = node;
	}
	*lst = NULL;
}
