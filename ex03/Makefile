# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/12 15:17:03 by palu              #+#    #+#              #
#    Updated: 2025/03/17 18:43:54 by paulmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = humanWeapon

CC = c++
CFLAGS = -Wall -Wextra -g3 -std=c++98 -I$(INCLUDE_DIR)

INCLUDE_DIR = include/
SRC_DIR = src/
OBJ_DIR = obj

SRC_FILES = \
    HumanA.cpp \
    HumanB.cpp \
    Weapon.cpp \
    main.cpp
SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))

MANDATORY_SRCS = $(SRC)

PMANDATORY =  $(addprefix , $(MANDATORY_SRCS))
OBJS = $(PMANDATORY:$(SRC_DIR)%.cpp=$(OBJ_DIR)/%.o)


all: $(NAME)

$(OBJ_DIR)/%.o : $(SRC_DIR)%.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re