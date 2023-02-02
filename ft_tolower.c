/*
The function ft_tolower converts an upper-case to the corresponding lower-case letter.

Return the corresponding lower-case letter, or change nothing if is not an upper-case.
*/

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}