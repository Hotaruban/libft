/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremy <jeremy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:38:45 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/04 17:38:46 by jeremy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_lstsize count every node of the list, start at 1 to count the Null.

Return the lenght of the list.
*/

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	size_t	len_list;

	if (lst->content == NULL)
	{
		len_list = 0;
		return (len_list);
	}
	len_list = 1;
	while (lst->next != NULL)
	{
		lst = lst->next;
		len_list++;
	}
	return (len_list);
}
