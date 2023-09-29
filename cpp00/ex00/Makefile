# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 11:43:22 by kyacini           #+#    #+#              #
#    Updated: 2023/09/20 23:04:43 by kyacini          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = src/megaphone.cpp

NAME = megaphone

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

OBJS = objs/megaphone.o

all	:	${NAME}

${NAME}	:	${OBJS}
	${CC} ${OBJS} -o ${NAME}

${OBJS} : ${SRC}
	@mkdir -p objs
	${CC} -o $@ -c $< ${CFLAGS}

clean	:
	rm -rf objs

fclean	:	clean
	rm -rf ${NAME}
	
re:	fclean all