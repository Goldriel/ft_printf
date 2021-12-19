/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:24:38 by jarrakis          #+#    #+#             */
/*   Updated: 2021/10/25 17:01:47 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		((char *)buf)[i] = (unsigned char)ch;
		i++;
	}
	return (buf);
}
