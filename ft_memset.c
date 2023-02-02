/*
The function ft_memset writes len bytes of value c to the string s.

Returns its first argument.
*/

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (len--)
		*p++ = (unsigned char)c;
	return (s);
}