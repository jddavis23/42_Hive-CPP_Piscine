# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 16:27:42 by jdavis            #+#    #+#              #
#    Updated: 2023/01/10 12:20:08 by jdavis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

CC = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
SRC+= Bureaucrat.cpp
SRC += Form.cpp

all:	$(NAME)

$(NAME): $(SRC)
	$(CC) -o $(NAME) $(SRC)

#clean:
#	rm *.o

fclean:
	rm $(NAME)

re: fclean all 