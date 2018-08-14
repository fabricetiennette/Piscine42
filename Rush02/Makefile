# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchampag <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/25 14:46:18 by dchampag          #+#    #+#              #
#    Updated: 2018/02/25 20:41:43 by dchampag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = src/colle_2.c src/set_line.c src/ft_putchar.c src/ft_putstr.c src/ft_putnbr.c src/rush00.c src/rush01.c src/rush02.c src/rush03.c \
	  src/rush04.c src/ft_display_colle.c

INCLUDES = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC) -I $(INCLUDES)

fclean:
	rm -f $(NAME)

re: fclean $(NAME)
