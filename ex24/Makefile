# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/21 19:23:47 by mnenonen          #+#    #+#              #
#    Updated: 2019/10/25 19:46:48 by mnenonen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	gcc -c ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
		./srcs/ft_strlen.c ./srcs/ft_swap.c
	ar -rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

clean:
	rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	rm -f libft.a

re: fclean all
