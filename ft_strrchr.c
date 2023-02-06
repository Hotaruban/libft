/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurpy <jhurpy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:40:25 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/06 19:12:37 by jhurpy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_strrchr locates the last occurence of c
in the string pointed to by s, this included the null character.

Return a pointer to the located character.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s);
	ptr = (char *) s + len;
	if ((char) c == 0)
		return (ptr);
	while ((len + 1) > 0)
	{
		if (*ptr == (char) c)
			return (ptr);
		len--;
		ptr--;
	}
	return (NULL);
}
