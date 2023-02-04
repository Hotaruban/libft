/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremy <jeremy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:38:19 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/04 18:52:17 by jeremy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_lstclear pass the node pointed by lst and the nodes after
to the function pointed by del, and free the memory of the nodes.
*/

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	void	*temp;
	t_list	*node;

	temp = *lst;
	while (temp != NULL)
	{
		node = temp->next;
		*del(temp->content);
		free(temp);
		temp = node;
	}
	*lst = NULL;
}
