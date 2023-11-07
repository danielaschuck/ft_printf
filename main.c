/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschuck- <dschuck-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:35:41 by dschuck-          #+#    #+#             */
/*   Updated: 2023/11/07 19:35:55 by dschuck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int    main(void)
{
    int    len;
    int    len2;
    int    number;
    unsigned int    ui;
    void    *addr;
    void    *addr1;

    ui = 4294967295;
    number = 160;
    addr = NULL; 
    addr1 = &len;


    len = ft_printf("Let's try to print something.\n");
    len2 = printf("Let's try to print something.\n");

    ft_printf("Character: %c\n", 'T');
    printf("Character: %c\n", 'T');

    ft_printf("String: %s\n", "I am a string !");
    printf("String: %s\n", "I am a string !");

    len = ft_printf("Percent: %%\n");
    len2 = printf("Percent: %%\n");

    ft_printf("Length: %d, %i\n", len, len);
    printf("Length: %d, %i\n", len, len);

    ft_printf("Negative: %d\n", -762534);
    printf("Negative: %d\n", -762534);

    ft_printf("Unsigned: %u\n", ui);
    printf("Unsigned: %u\n", ui);

    ft_printf("Unsigned hex: %x, %X\n",number, number);
    printf("Unsigned hex: %x, %X\n",number, number);

    ft_printf("Address: %p\n", addr);
    printf("Address: %p\n", addr);

    ft_printf("Address: %p\n", addr1);
    printf("Address: %p\n", addr1);
}
