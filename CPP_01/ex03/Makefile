# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 11:17:04 by jdavis            #+#    #+#              #
#    Updated: 2022/11/02 11:22:16 by jdavis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ

CC = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
#SRC+=  Weapon.hpp
SRC+= Weapon.cpp
#SRC += HumanA.hpp
SRC += HumanA.cpp
#SRC += HumanB.hpp
SRC += HumanB.cpp

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC)

#clean:
#	rm *.o

fclean:
	rm a.out

re: fclean all 