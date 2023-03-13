# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 16:13:35 by fgeorgea          #+#    #+#              #
#    Updated: 2023/03/13 15:54:13 by fgeorgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

DIR = srcs/

SRC =	$(DIR)push_swap.c \
		$(DIR)parsing.c \
		$(DIR)utils.c \
		$(DIR)libft_utils.c \

OBJ = ${SRC:.c=.o}

CFLAGS = -Wall -Werror -Wextra -fsanitize=address -g

REMOVE = rm -f

COMPILE = gcc $(CFLAGS) -o $(NAME)

all: $(NAME)

$(NAME): $(OBJ)
	@$(COMPILE) $(OBJ)

clean:
	@$(REMOVE) $(OBJ) 

fclean:	clean
	@$(REMOVE) $(NAME)
	
re: fclean all

norm: 
	norminette -R CheckDefine srcs/

.PHONY: all clean fclean re norm
