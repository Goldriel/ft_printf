/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:10:15 by jarrakis          #+#    #+#             */
/*   Updated: 2021/10/22 18:01:46 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_mem(char const *s, size_t len)
{
	if (ft_strlen(s) >= len)
	{
		return ((char *)ft_calloc(len + 1, sizeof(char)));
	}
	else if (ft_strlen(s) < len)
	{
		return ((char *)ft_calloc(ft_strlen(s) + 1, sizeof(char)));
	}
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		new_str = (char *)ft_calloc(1, sizeof(char));
		if (new_str == NULL)
			return (NULL);
		return (new_str);
	}
	new_str = ft_mem(s, len);
	if (new_str == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		new_str[i] = s[start];
		i++;
		start++;
	}
	new_str[i] = '\0';
	return (new_str);
}
