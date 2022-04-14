# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esylva <esylva@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/09 23:11:35 by esylva            #+#    #+#              #
#    Updated: 2022/04/09 23:11:35 by esylva           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

SRCS := megaphone.cpp

OBJS := ${patsubst %.cpp,%.o,${SRCS}}

GCC := c++
FLAGS := -Wall -Wextra -Werror -std=c++98

all := ${NAME}

${NAME} : ${OBJS}
	${GCC} ${OBJS} -o ${NAME}

%.o : %.cpp
	${GCC} ${FLAGS} -c $< 

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re