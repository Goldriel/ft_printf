/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:09:57 by jarrakis          #+#    #+#             */
/*   Updated: 2021/12/20 17:10:21 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_num(int num)
{
	int		count;
	char	*line;

	line = ft_itoa(num);
	count = print_char(line);
	free(line);
	return (count);
}

int	print_u(unsigned int num)
{
	int		count;
	char	*string;

	string = ft_utoa_base(num, 10);
	count = print_char(string);
	free (string);
	return (count);
}
