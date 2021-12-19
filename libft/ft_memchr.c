/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:13:01 by jarrakis          #+#    #+#             */
/*   Updated: 2021/10/25 18:34:25 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Finds the first occurrence of ch
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((char *)s + i) == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
