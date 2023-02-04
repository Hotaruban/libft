/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremy <jeremy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:38:39 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/04 18:48:33 by jeremy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_lstnew creat a new node with the new content send in argument.

Return the pointer to the content with malloc memory allocated.
*/

#include <stdlib.h>
#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node != NULL)
	{
		new_node->content = content;
		new_node->next = NULL;
	}
	return (new_node);
}
