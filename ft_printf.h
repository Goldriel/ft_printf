#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include<stdarg.h>
#include<unistd.h>
#include"libft/libft.h"

int	ft_printf(const char *line, ...);
int print_c(int c);
int print_string(char *s);
int print_char(char *s);
int print_num(int num);
int print_u(unsigned int num);
int print_pointr(unsigned long p);
int print_x_lour(unsigned int h);
int print_x_upper(unsigned int h);
char	*ft_utoa_base(unsigned long long num, int base);

#endif