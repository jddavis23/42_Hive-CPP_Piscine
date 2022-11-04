# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 15:51:10 by jdavis            #+#    #+#              #
#    Updated: 2022/11/04 15:51:35 by jdavis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap

CC = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
SRC+= ClapTrap.cpp

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) -o $(NAME) $(SRC)

#clean:
#	rm *.o

fclean:
	rm fixed

re: fclean all 