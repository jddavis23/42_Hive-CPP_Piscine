# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 16:27:42 by jdavis            #+#    #+#              #
#    Updated: 2023/01/13 12:40:53 by jdavis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = c++ -Wall -Wextra -Werror -std=c++98

SRC+= main.cpp

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) -o $(NAME) $(SRC)

#clean:
#	rm *.o

fclean:
	rm $(NAME)

re: fclean all 