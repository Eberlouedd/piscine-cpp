# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 11:43:22 by kyacini           #+#    #+#              #
#    Updated: 2023/09/16 11:57:30 by kyacini          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp \

NAME = libft.a

OBJS = ${SRC:.c=.o}

OBJS_BONUS = ${BONUS:.c=.o}

all	:	${NAME}

%.o : %.c
	c++ -o $@ -c $< -Wall -Werror -Wextra

libft.a	:	${OBJS}
	ar rc ${NAME} ${OBJS}

bonus	:	${OBJS} ${OBJS_BONUS}
	ar rc ${NAME} ${OBJS} ${OBJS_BONUS}
clean	:
	rm -rf *.o

fclean	:	clean
	rm -rf ${NAME}
	
re:	fclean all