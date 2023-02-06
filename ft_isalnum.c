/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurpy <jhurpy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:37:46 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/06 19:07:07 by jhurpy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_isalnum test every caracteres if they are alpha
- lower or upper case - or digit in ASCII table.

Return 0 if the characters test is false.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
