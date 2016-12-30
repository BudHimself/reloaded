# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhenry <fhenry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/30 20:34:32 by fhenry            #+#    #+#              #
#    Updated: 2016/12/30 20:36:19 by fhenry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME	 = 	libft.a

CC		 = 	gcc
CFLAGS	 = 	-Wall -Werror -Wextra -g

SRC_PATH =	srcs/
OBJ_PATH =	obj/
INC_PATH = 	includes/

SRC_NAME =	ft_putchar.c \
			ft_putstr.c \
			ft_strcmp.c \
			ft_strlen.c \
			ft_swap.c

OBJ_NAME = 	$(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
		@ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
		@mkdir $(OBJ_PATH) 2> /dev/null || true
		$(CC) $(CFLAGS) -I $(INC_PATH) -c $< -o $@

clean:
		@rm -rf $(OBJ_PATH)

fclean: clean
		@rm -f $(NAME)

re: fclean all
