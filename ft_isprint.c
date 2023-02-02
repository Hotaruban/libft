/*
The function ft_isalnum test every caracteres if they are printable in ASCII table.
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}