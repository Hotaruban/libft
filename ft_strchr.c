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