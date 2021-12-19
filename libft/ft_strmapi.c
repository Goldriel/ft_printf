/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:58:08 by jarrakis          #+#    #+#             */
/*   Updated: 2021/10/19 21:46:38 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	new_str = ft_strdup(s);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (new_str[i] != '\0')
	{
		new_str[i] = (*f)(i, new_str[i]);
		i++;
	}
	return (new_str);
}
