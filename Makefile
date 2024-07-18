# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjakowic <mjakowic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/27 19:41:39 by mjakowic          #+#    #+#              #
#    Updated: 2024/05/27 19:47:11 by mjakowic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = push_swap
CC          = clang
CFLAGS      = -Wall -Wextra -Werror
LIBFT_DIR   = libs/libft
LIBFT       = $(LIBFT_DIR)/libft.a
RM          = rm -rf
SRCS        = error.c insertion_sort.c moves.c parse.c push_swap.c sort.c UTILS_1.c UTILS_2.c
SRC_DIR     = srcs
OBJS        = $(SRCS:%.c=$(SRC_DIR)/%.o)
INCLUDES    = -I./includes -I$(LIBFT_DIR)

all: $(LIBFT) $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L$(LIBFT_DIR) -lft

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

