/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremy <jeremy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:38:32 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/04 17:38:33 by jeremy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_lstlast return the last node of the list.
*/

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	while (lst != NULL)
		lst = lst->next;
	return (lst->content);
}
