/*
The function ft_memcpy copies n bytes from memory area src to memory area dst.

Return the original value of dst.
*/

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *) dst;
	s = (char *) src;
	while (n--)
		*d++ = *s++;
	return (dst);
}