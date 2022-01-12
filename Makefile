# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbenkhar <dbenkhar@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/10 10:39:02 by dbenkhar          #+#    #+#              #
#    Updated: 2022/01/10 23:54:58 by dbenkhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS =	*.c

CC = gcc
RM = rm -f

CFLAGS = -Wall -Werror -Wextra -g

LIBFT = ./libft/libft.a

all :
	$(MAKE) -C ./libft
	${CC} ${CFLAGS} -o ${NAME} ${SRCS} ${LIBFT}

clean :
	$(MAKE) clean -C ./libft

fclean : clean
	$(MAKE) fclean -C ./libft
	${RM} ${NAME}

re : fclean all
