/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremy <jeremy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:37:55 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/04 17:37:56 by jeremy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_isalnum test every caracteres if they are ASCII in ASCII table.

Return 0 if the characters test is false.
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
