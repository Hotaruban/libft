/*
The function ft_putchar_fd use write to copy the character c in the file descriptor fd.

Return nothing.
*/

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
