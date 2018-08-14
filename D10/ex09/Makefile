# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/27 12:10:42 by jeetienn          #+#    #+#              #
#    Updated: 2018/02/27 14:32:52 by jeetienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PREFIX = ft
NAME = ft_advanced_do-op
SRC_DIR = srcs
INC_DIR = includes

$(NAME): all

all:
	gcc -Werror -Wall -Wextra $(SRC_DIR)/cli.c $(SRC_DIR)/$(PREFIX)_*.c \
		-I$(INC_DIR) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

