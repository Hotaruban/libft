/*
The function ft_strjoin allocate memory and concatenate the string s1 and s2 in new string.

Return the new string result.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	s[i]  ='\0';
}
