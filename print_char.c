#include"ft_printf.h"

int print_c(int c)
{
	write(1, &c. 1);
	return (1);
}

int print_string(char *s)
{
	int	count;

	count = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*s)
	{
		write(1, s, 1);
		s++;
		count++;
	}
	return (count);
}

int print_char(unsigned char *s)
{
	int count;

	count = 0;
	while (s[count])
	{
		write(1, &s[count], 1);
		count++;
	}
	return (count);
}