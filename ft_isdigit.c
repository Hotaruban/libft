/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremy <jeremy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:38:01 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/04 17:38:02 by jeremy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_isdigit test every caracteres if they are digit in ASCII table.

Return 0 if the characters test is false.
*/

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
