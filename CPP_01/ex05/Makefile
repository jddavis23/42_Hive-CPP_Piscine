# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 10:52:12 by jdavis            #+#    #+#              #
#    Updated: 2022/11/03 10:53:16 by jdavis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CC = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
SRC+= Harl.cpp

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) -o $(NAME) $(SRC)

#clean:
#	rm *.o

fclean:
	rm a.out

re: fclean all 