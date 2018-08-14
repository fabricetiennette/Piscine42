# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeetienn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/27 10:08:21 by jeetienn          #+#    #+#              #
#    Updated: 2018/02/27 10:08:58 by jeetienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PREFIX = ft
NAME = lib$(PREFIX).a
SRC_DIR = srcs
INC_DIR = includes

$(NAME): all

all:
		gcc -Werror -Wall -Wextra -c $(SRC_DIR)/$(PREFIX)_*.c -I$(INC_DIR)
			ar rcs $(NAME) *.o

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all
