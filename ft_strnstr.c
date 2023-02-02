/*
The function ft_strnstr locates the first occurence of 
null terminated string needle in the string haystack,
where no more than len charactere are searched.

Return pointer to the first character of the first occurence of needle.
If needle empty return haystack, if needle occurs nowhere return NULL.
*/

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	char	*ptr;
	
	ptr = (char *) haystack;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return (ptr);
	if (!ft_strlen(haystack) || len < needle_len)
		return (0);
	i = 0;
	while (ptr[i] != 0 && i < (len - needle_len + 1))
	{
		if (ptr[i] == *needle
			&& (ft_strncmp(&ptr[i], needle, needle_len) == 0))
			return (&ptr[i]);
		i++;
	}
	return (0);
}