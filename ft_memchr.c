/*
The function ft_memchr locates the first occurence of c in string s, 
search in no more than len characteres of in string s.

Return a pointer to the byte located c.
*/

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t len)
{
	char	*ptr;

	ptr = (char *) s;
	while (len > 0)
	{
		if (*ptr == (unsigned char) c)
			return (ptr);
		ptr++;
		len--;
	}
	return (NULL);
}