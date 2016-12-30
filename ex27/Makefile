# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhenry <fhenry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/30 20:52:54 by fhenry            #+#    #+#              #
#    Updated: 2016/12/30 21:08:16 by fhenry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re test

NAME = ft_display_file

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRC_PATH = src/
OBJ_PATH = obj/
INC_PATH = includes/

SRC_NAME = main.c \
		   ft_putstr.c \
		   ft_putchar.c

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -o $(NAME) $(OBJ) -I $(INC_PATH)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC) $(CFLAGS) -I $(INC_PATH) -c $< -o $@

clean:
	@rm -rf $(OBJ_PATH)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	@rm -f $(NAME)

re: fclean all
