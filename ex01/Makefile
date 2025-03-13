# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: palu <palu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/07 14:59:58 by palu              #+#    #+#              #
#    Updated: 2025/03/12 14:11:04 by palu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =			main.cpp Zombie.cpp zombieHorde.cpp
OBJ =			$(SRC:.cpp=.o)

CC =			c++

FLAG =			-Wall -Wextra -Werror -std=c++98

RM =			rm -f

NAME =			horde

all :			$(NAME)

$(NAME) :		$(OBJ)
					$(CC) $(FLAG) $(OBJ) -o $(NAME)
clean :
					$(RM) $(OBJ)
					$(RM) *~

fclean :		clean
					$(RM) $(NAME)

re :			fclean
					$(MAKE) $(NAME)

.PHONY: all clean fclean re