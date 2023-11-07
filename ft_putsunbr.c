#include "../lib/ft_printf.h"

int	ft_putsunbr(unsigned int num)
{
	static unsigned int		count;
	unsigned int			sign;

	sign = 0;
	count = 0;
	if (num >= 10)
		ft_putsunbr(num / 10);
	count += ft_putchar((num % 10) + 48);
	return (count + sign);
}
