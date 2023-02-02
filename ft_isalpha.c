/*
The function ft_isalpha test every caracteres if they are alpha - lower or upper case in ASCII table.
*/

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}