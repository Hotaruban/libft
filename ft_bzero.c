/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurpy <jhurpy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:37:38 by jeremy            #+#    #+#             */
/*   Updated: 2023/04/20 14:46:00 by jhurpy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_bzero function is a function that sets the first n bytes of the memory
pointed to by s to zero. It does so by using a loop to iterate
over the n bytes of memory and setting each byte to zero
using a typecast to unsigned char *.
*/

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}
