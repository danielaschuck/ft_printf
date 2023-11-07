# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dschuck- <dschuck-@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 16:47:58 by dschuck-          #+#    #+#              #
#    Updated: 2023/11/01 16:49:02 by dschuck-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = format_check.c ft_putchar.c ft_putsunbr.c ft_putstr.c ft_putnbr.c ft_printf.c ft_puthex.c ft_strchr.c

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

HEADER = ft_printf.h

all:	$(NAME)

$(OBJS):
	$(CC) $(CFLAGS) -c $(SRCS)
	
$(NAME): $(OBJS)
	
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	
fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re


