/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschuck- <dschuck-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:45:44 by dschuck-          #+#    #+#             */
/*   Updated: 2023/11/07 16:45:47 by dschuck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;
	int			result;

	i = 0;
	result = 0;
	va_start(ap, format);
	while (format[i])
	{
		if ((format[i] == '%')
			&& (ft_strchr("cspdiuxX%", format[i + 1])))
		{
			result += format_check(format, i, ap);
			i++;
		}
		else
			result += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return(result);
}
