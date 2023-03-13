# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 16:13:35 by fgeorgea          #+#    #+#              #
#    Updated: 2023/03/13 18:18:27 by fgeorgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

DIR = srcs/

LIBFT = ar rcs $(NAME) ./include/libft/libft.a

DEPENDS = make -C include/libft

SRC =	$(DIR)push_swap.c \
		$(DIR)parsing.c \
		$(DIR)utils.c \
		$(DIR)libft_utils.c \

OBJ = ${SRC:.c=.o}

CFLAGS = -Wall -Werror -Wextra -fsanitize=address -g

REMOVE = rm -f

COMPILE = gcc $(CFLAGS) -o $(NAME) -Iincludes -Linclude/libft -lft

all: $(NAME)

$(NAME): libft $(OBJ)
	@$(COMPILE) $(OBJ)

clean:
	@$(REMOVE) $(OBJ)
	@make -C include/libft clean

fclean:	clean
	@$(REMOVE) $(NAME)
	@make -C include/libft fclean
	
re: fclean all

libft: 
	$(DEPENDS)

norm: 
	norminette -R CheckDefine srcs/

.PHONY: all clean fclean re norm libft
