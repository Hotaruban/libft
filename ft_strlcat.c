/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurpy <jhurpy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:40:01 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/06 19:12:11 by jhurpy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_strlcat appends string src to the end of dst.
It append at most dstsize - strlen(dst) - 1 characters and will NUL-terminate.

Return length of dst + lenght of src.
*/

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= 0 || dstsize <= dstlen)
		return (dstsize + srclen);
	i = 0;
	j = dstlen;
	while (src[i] != 0 && i < (dstsize - dstlen - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dstlen + srclen);
}
