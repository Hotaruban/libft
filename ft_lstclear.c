/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremy <jeremy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:38:19 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/04 18:10:08 by jeremy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_lstclear pass the node pointed by lst and the node after
to the function pointed by del, and free the memory of the nodes.
*/

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	void	*temp;

	while (*lst->next != NULL)
	{
		temp = lst->next;
		del(*lst->content);
		free(*lst->next);
		lst = temp;
	}
	if (*lst->next == NULL)
	{
		del(*lst);
		free(*lst);
	}
}
