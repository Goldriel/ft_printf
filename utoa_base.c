/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:10:32 by jarrakis          #+#    #+#             */
/*   Updated: 2021/12/20 17:19:14 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	numsize(unsigned long long num, int base)
{
	size_t	i;

	i = 0;
	while (num)
	{
		i++;
		num = num / base;
	}
	return (i);
}

static char	*dtostr(char *string, size_t len, unsigned long long n, int base)
{
	string[len] = '\0';
	len--;
	while (n)
	{
		if (n % base >= 10)
			string[len] = ((n % base) - 10) + 'a';
		else
			string[len] = (n % base) + '0';
		n = n / base;
		len--;
	}
	return (string);
}

char	*ft_utoa_base(unsigned long long num, int base)
{
	size_t	len;
	char	*string;

	if (num == 0)
		return (ft_strdup("0"));
	len = numsize(num, base);
	string = (char *) malloc(sizeof(char) * (len + 1));
	if (string == NULL)
		return (NULL);
	return (dtostr(string, len, num, base));
}
