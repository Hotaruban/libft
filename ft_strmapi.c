/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremy <jeremy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:40:13 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/04 17:40:14 by jeremy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_strmapi applie the function f to each characters of the string s.

Return the new string creat in malloc memory,
*/

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
