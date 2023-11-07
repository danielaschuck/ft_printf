/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschuck- <dschuck-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:28:27 by dschuck-          #+#    #+#             */
/*   Updated: 2023/11/07 18:07:47 by dschuck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
static int len_hex(unsigned long nbr)
{
	int len;
	len = 0;
	if(!nbr)
		len++;
	while(nbr)
	{
		nbr/=16;
		len++;
	}
	return(len);
}
int	ft_puthex(unsigned long num)
{
	static unsigned int		count;

	count = 0;
	count=len_hex(num);
	
	if (num >= 16)
	{
		ft_puthex(num / 16);
		ft_puthex(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_puthex(num + 48);
		else 
		{
			if(num == 'x')
				ft_puthex(num -10 +'a');
			if(num == 'X')
				ft_puthex(num -10 + 'A');
		}
	}

	return (count);
}
