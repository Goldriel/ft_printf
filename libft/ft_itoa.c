/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:13:14 by jarrakis          #+#    #+#             */
/*   Updated: 2021/10/25 18:33:23 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Converts a string to int
*/

static void	ft_strrev(char *buf)
{
	size_t	len;
	size_t	i;
	char	tmp;

	len = ft_strlen(buf);
	i = 0;
	while (i < len / 2)
	{
		tmp = buf[i];
		buf[i] = buf[len - i - 1];
		buf[len - i - 1] = tmp;
		i++;
	}
}

static int	ft_len_num(long int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*make_num(char *buf, int n, int index, int sign)
{
	buf[index++] = n % 10 + '0';
	n /= 10;
	while (n > 0)
	{
		buf[index++] = n % 10 + '0';
		n /= 10;
	}
	if (sign < 0)
		buf[index++] = '-';
	buf[index] = '\0';
	return (buf);
}

char	*ft_itoa(int n)
{
	char	*buf;
	int		sign;
	int		index;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	index = ft_len_num(n);
	buf = (char *)malloc(sizeof(char) * index + 1);
	if (buf == NULL)
		return (NULL);
	sign = n;
	if (sign < 0)
		n = -n;
	index = 0;
	buf = make_num(buf, n, index, sign);
	ft_strrev(buf);
	return (buf);
}
