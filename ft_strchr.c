/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremy <jeremy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:39:45 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/04 17:39:46 by jeremy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_strchr locates the first occurence of c in the string pointed to by s, this included the null character.

Return a pointer to the located character.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if (*s == (unsigned char) c)
			return ((char *) s);
		s++;
		len--;
	}
	if (*s == (unsigned char) c)
		return ((char *) s);
	return (0);
}
