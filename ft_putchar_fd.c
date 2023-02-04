/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurpy <jhurpy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:39:13 by jeremy            #+#    #+#             */
/*   Updated: 2023/02/04 23:07:03 by jhurpy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_putchar_fd use write to copy the character c in the file descriptor fd.

Return nothing.
*/

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
