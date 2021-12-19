/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:04:50 by jarrakis          #+#    #+#             */
/*   Updated: 2021/10/25 18:28:20 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	converts a number of type int to a string
*/

static int	ft_spase(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	long int	n;
	int			sign;

	i = 0;
	sign = 1;
	n = 0;
	while (ft_spase(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		n = 10 * n + (str[i] - '0');
		if (sign * n < -2147483648)
			return (0);
		if (sign * n > 2147483647)
			return (-1);
		i++;
	}
	return (sign * n);
}
