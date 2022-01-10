# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbenkhar <dbenkhar@student.42>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/10 10:39:02 by dbenkhar          #+#    #+#              #
#    Updated: 2022/01/10 14:04:56 by dbenkhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

SRCS = *.c

CC = gcc
RM = rm -f

CFLAGS = -Wall -Werror -Wextra -g

LIBFT = ./libft/libft.a

all :
	$(MAKE) -C ../libft
	${CC} ${CFLAGS} -o ${NAME} ${SRCS} ${LIBFT}

clean :
	$(MAKE) clean -C ./libft

fclean : clean
	${RM} ${NAME}

re : fclean all