/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexatoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurpy <jhurpy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 00:53:40 by jhurpy            #+#    #+#             */
/*   Updated: 2023/05/15 17:28:38 by jhurpy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ishexa(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F')
			|| (c >= 'a' && c <= 'f'))
		return (1);
	return (0);
}

/*
The function ft_atoi_base converts the string argument str (base N <= 16)
*/

int	ft_hexatoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (ft_ishexa(*str))
	{
		result = result * 16;
		if (*str >= '0' && *str <= '9')
			result += (*str - '0');
		else if (*str >= 'a' && *str <= 'f')
			result += (*str - 'a' + 10);
		else if (*str >= 'A' && *str <= 'F')
			result += (*str - 'A' + 10);
		str++;
	}
	return (result * sign);
}

