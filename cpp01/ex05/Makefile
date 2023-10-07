# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 23:35:36 by kyacini           #+#    #+#              #
#    Updated: 2023/10/07 02:07:06 by kyacini          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	./main.cpp	\
					./Harl.cpp

OBJS			=	${SRCS:.cpp=.o}

DEPS			=	${SRCS:.cpp=.d}

NAME			=	message

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