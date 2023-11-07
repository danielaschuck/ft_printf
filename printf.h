
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int	check_format(const char *arg, int i, va_list ap);
int	ft_putchar(char c);
int	ft_putsunbr(unsigned int nb);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);

#endif
