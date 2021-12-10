/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:35:15 by jarrakis          #+#    #+#             */
/*   Updated: 2021/12/10 19:30:20 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdarg.h>
#include<unistd.h>

int	ft_printf(const char *line, ...)
{
	int count;
	int i;
	va_list	args;

	count = 0;
	i = 0;
	while (line[i] != '\0')
	{
		write(1, &line[i], 1);
		i++;
		count++;
	}
	return (count);
}

int main(void)
{
	ft_printf("Hello world\n");
	return (0);
}
