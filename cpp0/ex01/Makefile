# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 00:45:07 by kyacini           #+#    #+#              #
#    Updated: 2023/09/23 20:27:17 by kyacini          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADERS			=	./includes/Phonebook.hpp	\
					./includes/Contact.hpp

SRCS			=	./main.cpp				\
					./class/PhoneBook.cpp	\
					./class/Contact.cpp

OBJS			=	${SRCS:.cpp=.o}

DEPS			=	${SRCS:.cpp=.d}

NAME			=	phonebook

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