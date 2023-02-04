/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremy <jeremy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:38:15 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/04 18:39:24 by jeremy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_lstadd_front add a new node at the begining of the list.
*/

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}
