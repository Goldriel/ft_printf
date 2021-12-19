/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:09:06 by jarrakis          #+#    #+#             */
/*   Updated: 2021/10/25 18:31:17 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The calloc () function returns a pointer to the allocated memory.
**	The size of the allocated memory is num * size,
**	where size is specified in bytes.
**	This means that the calloc () function allocates enough
**	memory for an array of num objects,
**	each size bytes in size. 
*/

void	*ft_calloc(size_t num, size_t size)
{
	void	*memory;
	size_t	i;

	i = 0;
	memory = malloc(num * size);
	if (memory == NULL)
		return (NULL);
	while (i < num * size)
	{
		((unsigned char *)memory)[i] = 0;
		i++;
	}
	return ((void *)memory);
}
