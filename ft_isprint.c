/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremy <jeremy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:38:05 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/04 17:38:06 by jeremy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_isalnum test every caracteres if they are printable in ASCII table.

Return 0 if the characters test is false.
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
