/*
The function ft_strdup allocates sufficient memory for copy of the strings s1, 
does the copy, 
and returns a pointer to it.
The pointer may be used as an argument to the function free.
*/

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	len;

	len = ft_strlen(s) + 1;
	if (s == NULL)
		return (0);
	p = (char *)malloc(len * sizeof(char));
	if (p == 0)
		return (NULL);
	else
	ft_strlcpy(p, s, len);
		return (p);
}