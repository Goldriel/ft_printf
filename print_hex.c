#include "ft_printf.h"

int print_pointr(unsigned long p)
{
	int count;
	char *string;

	count = print_char("0x");
	string = ft_utoa_base(p, 16);
	count += print_char(string);
	free(string);
	return (count);
}

int print_x_lour(unsigned int h)
{
	int count;
	char *string;
	string = ft_utoa_base(h, 16);
	count = print_char(string);
	free(string);
	return (count);
}

int print_x_upper(unsigned int h)
{
	int count;
	char *string;
	int	i;

	i = 0;
	string = ft_utoa_base(h, 16);
	while (string[i] != '\0')
	{
		if (string[i] >= 'a' && string[i] <= 'f')
			string[i] = string[i] - 32;
		i++;
	}
	count = print_char(string);
	free(string);
	return (count);
}
