# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 10:52:12 by jdavis            #+#    #+#              #
#    Updated: 2022/11/04 13:18:06 by jdavis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CC = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
SRC+= Fixed.cpp

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) -o $(NAME) $(SRC)

#clean:
#	rm *.o

fclean:
	rm fixed

re: fclean all 