/*
The function ft_isalnum test every caracteres if they are alpha - lower or upper case - or digit in ASCII table.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
