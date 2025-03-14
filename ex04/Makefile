# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/14 12:30:28 by paulmart          #+#    #+#              #
#    Updated: 2025/03/14 12:31:51 by paulmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =			main.cpp Sed.cpp
OBJ =			$(SRC:.cpp=.o)

CC =			c++

FLAG =			-Wall -Wextra -Werror -std=c++98

RM =			rm -f

NAME =			Sed

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