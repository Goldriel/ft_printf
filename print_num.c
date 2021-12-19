#include "ft_printf.h"

int print_num(int num)
{
	int count;
	char *line;

	line = ft_itoa(num);
	count = print_char(line);
	free(line);
	return (count);
}

int print_u(unsigned int num)
{
	int count;
	char	*string;

	string = ft_utoa_base(num, 10);
	count = print_char(string);
	free (string);
	return (count);
}
