# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: palu <palu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/12 15:17:03 by palu              #+#    #+#              #
#    Updated: 2025/03/12 16:49:32 by palu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =			main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ =			$(SRC:.cpp=.o)

CC =			c++

FLAG =			-Wall -Wextra -Werror -std=c++98

RM =			rm -f

NAME =			HumanWeapon

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