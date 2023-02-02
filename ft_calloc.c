/*
The function ft_calloc allocates enough space for count objects that are size bytes of memory each is filled with bytes of value zero.

Return a pointer to allocated memory.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	p = (void *)malloc(count * size);
	if (p == 0)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}