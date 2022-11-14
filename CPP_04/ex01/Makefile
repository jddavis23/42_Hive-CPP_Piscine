# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 13:18:13 by jdavis            #+#    #+#              #
#    Updated: 2022/11/14 13:19:51 by jdavis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism

CC = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
SRC+= Cat.cpp
SRC+= Dog.cpp
SRC+= Animal.cpp

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) -o $(NAME) $(SRC)

#clean:
#	rm *.o

fclean:
	rm $(NAME)

re: fclean all 