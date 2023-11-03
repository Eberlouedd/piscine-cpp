# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 23:35:36 by kyacini           #+#    #+#              #
#    Updated: 2023/10/08 23:19:13 by kyacini          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	./main.cpp	\
					./Fixed.cpp

OBJS			=	${SRCS:.cpp=.o}

DEPS			=	${SRCS:.cpp=.d}

NAME			=	test

CC				=	c++
RM				=	rm -rf
CFLAGS			=	-Wall -Wextra -Werror -std=c++98  

### Commandes

all:			${NAME}

${NAME}:		${OBJS}
				${CC} ${CFLAGS} ${OBJS} -o ${NAME}

.cpp.o:
				${CC} -c ${CFLAGS} $^ -o $@

clean:
				${RM} ${OBJS} 

fclean:			clean
				${RM} ${NAME}

re:				fclean all

-include : ${DEPS}
re:	fclean all