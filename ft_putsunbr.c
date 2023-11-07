/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsunbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschuck- <dschuck-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:46:41 by dschuck-          #+#    #+#             */
/*   Updated: 2023/11/07 16:46:49 by dschuck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
