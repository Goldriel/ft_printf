/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:35:15 by jarrakis          #+#    #+#             */
/*   Updated: 2021/12/20 17:03:34 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	read_key(char c, va_list list)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = print_c(va_arg(list, int));
	else if (c == 's')
		count = print_string(va_arg(list, char *));
	else if (c == 'd' || c == 'i')
		count = print_num(va_arg(list, int));
	else if (c == 'u')
		count = print_u(va_arg(list, unsigned int));
	else if (c == 'p')
		count = print_pointr(va_arg(list, unsigned long));
	else if (c == 'x')
		count = print_x_lour(va_arg(list, unsigned int));
	else if (c == 'X')
		count = print_x_upper(va_arg(list, unsigned int));
	else if (c == '%')
	{
		count++;
		write(1, "%", 1);
	}
	return (count);
}

int	ft_printf(const char *line, ...)
{
	int		count;
	va_list	args;

	if (!line)
		return (0);
	va_start(args, line);
	count = 0;
	while (*line)
	{
		if (*line == '%' && ft_strchr("cspudixX%", *(line + 1)))
		{
			line++;
			count += read_key(*line, args);
		}
		else
		{
			write(1, line, 1);
			count++;
		}
		line++;
	}
	va_end(args);
	return (count);
}
