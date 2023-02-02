/*
The function ft_toupper converts an lower-case to the corresponding upper-case letter.

Return the corresponding upper-case letter, or change nothing if is not an lower-case.
*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}