#include "../lib/ft_printf.h"

int	format_check(const char *arg, int i, va_list ap)
{
	if (arg[i + 1] == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (arg[i + 1] == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (arg[i + 1] == 'd' || arg[i + 1] == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (arg[i + 1] == 'u')
		return (ft_putsunbr(va_arg(ap, unsigned int)));
	else if (arg[i + 1] == 'p')
		
	else if (arg[i + 1] == 'x' || arg[i + 1] == 'X')
		
	else if (arg[i + 1] == '%')
		return (ft_putchar('%'));
	return (0);
}
