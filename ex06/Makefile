# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/14 17:29:51 by paulmart          #+#    #+#              #
#    Updated: 2025/03/17 15:57:27 by paulmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =			main.cpp Harl.cpp
OBJ =			$(SRC:.cpp=.o)

CC =			c++

FLAG =			-Wall -Wextra -Werror -std=c++98

RM =			rm -f

NAME =			harlFilter

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