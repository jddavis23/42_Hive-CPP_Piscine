# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeffdavis <jeffdavis@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 16:27:42 by jdavis            #+#    #+#              #
#    Updated: 2023/01/19 15:58:00 by jeffdavis        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack

CC = c++ -Wall -Wextra -Werror -std=c++98 -std=c++11

SRC+= main.cpp

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) -o $(NAME) $(SRC)

#clean:
#	rm *.o

fclean:
	rm $(NAME)

re: fclean all 