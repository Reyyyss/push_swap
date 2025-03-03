# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/16 11:31:27 by hcarrasq          #+#    #+#              #
#    Updated: 2025/02/27 16:09:48 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS_FILES = push_swap.c aux_pswap.c push_lists.c movements_push.c utils.c radix_sort.c 

SRCS = $(addprefix $(SRCS_DIR)/, $(SRCS_FILES))

SRCS_DIR = srcs

OBJS	= $(SRCS:.c=.o)

CFLAGS = -g -Wall -Wextra -Werror
CC = cc

all:	$(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	$(CC) $(CFLAGS)  $(OBJS) libft/libft.a -Llibft -lft -o $(NAME)
	


clean:
		cd libft && make clean
		rm -rf $(OBJS)

fclean:		clean
		cd libft && make fclean
		rm -rf $(NAME)

re:		fclean 	all

.PHONY : all clean fclean re