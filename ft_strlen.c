/*
The function ft_strlen computes the lenght of the string s.

Returns the number of characteres that precede the NUL-terminating character.
*/

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}