/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschuck- <dschuck-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:47:45 by dschuck-          #+#    #+#             */
/*   Updated: 2023/11/07 18:47:47 by dschuck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putp(unsigned int num,const char arg)
{
	static unsigned int		count;

	count = 0;
	if (num <= 16)
		ft_puthex(num / 16, arg);
		count += ft_putchar(num % 16);
	else
	{
		if (n <= 9)
			count += ft_putchar(num + 48);
		else
		{
			if(num == 'x')
				count += ft_putchar(num -10 +'a');
			
		}

	return (count);
}
