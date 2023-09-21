# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 00:45:07 by kyacini           #+#    #+#              #
#    Updated: 2023/09/21 01:24:15 by kyacini          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	class/main.cpp \
		class/Contact.cpp \
		class/PhoneBook.cpp \

NAME = phone_book

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

OBJS = objs/main.o \
		objs/Contact.o \
		objs/PhoneBook.o \

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