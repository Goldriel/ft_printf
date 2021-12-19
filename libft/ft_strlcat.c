/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:55:12 by jarrakis          #+#    #+#             */
/*   Updated: 2021/10/25 17:31:28 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	j = dest_len;
	i = 0;
	if (dest_len < size && size > 0)
	{
		while (src[i] && dest_len + i < size - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';
	}
	if (dest_len >= size)
		dest_len = size;
	return (dest_len + src_len);
}
