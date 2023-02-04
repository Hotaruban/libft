/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremy <jeremy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:38:27 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/04 19:00:00 by jeremy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_lstiter pass the nodes start from lst in function pointed by f one by one.
*/

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return (NULL);
	(*f)(lst->content);
	ft_lstiter(lst->next, f);
}
