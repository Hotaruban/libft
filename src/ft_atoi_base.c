/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhurpy <jhurpy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 00:53:40 by jhurpy            #+#    #+#             */
/*   Updated: 2023/05/14 02:23:34 by jhurpy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_atoi_base converts the string argument str (base N <= 16)
*/

int		ft_atoi_base(const char *str)
{
	int		i;
	int		nb;
	char	*base;

	i = 0;
	nb = 0;
	base = "0123456789ABCDEFabcdef";
	while (str[i])
	{
		nb = nb * 16 + ft_strchr(base, str[i]) - base; // convert the string to int
		i++;
	}
	return (nb);
}
