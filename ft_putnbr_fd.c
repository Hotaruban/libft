/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremy <jeremy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 22:15:20 by jeremy            #+#    #+#             */
/*   Updated: 2023/01/31 22:15:21 by jeremy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_putnbr_fd use copy a integer in the file descriptor fd.
The integer must to be change in characters.

Return nothing.
*/

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
		ft_putnbr_fd(n, fd);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar_fd((n + 48), fd);
	else if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd((n % 10 + 48), fd);
	}
	else
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd((n * -1), fd);
	}
}
