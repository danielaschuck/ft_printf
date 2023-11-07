
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	format_check(const char *arg, int i, va_list ap);
int	ft_putchar(char c);
int	ft_putsunbr(unsigned int nb);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_puthex(unsigned int num,const char arg);

#endif