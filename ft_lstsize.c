/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurpy <jhurpy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:38:45 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/06 19:08:21 by jhurpy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_lstsize count every node of the list,
start at 1 to count the Null.

Return the lenght of the list.
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*node;

	node = lst;
	i = 0;
	while (node != NULL)
	{
		node = node->next;
		i++;
	}
	return (i);
}
