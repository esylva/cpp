# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esylva <esylva@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/09 23:11:22 by esylva            #+#    #+#              #
#    Updated: 2022/04/15 21:19:49 by esylva           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
 
SRCS = main.cpp  Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = ${patsubst %.cpp,%.o,${SRCS}}
D_FILES = ${patsubst %.cpp,%.d,${SRCS}}

GCC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME} : ${OBJS}
	${GCC} ${OBJS} -o ${NAME}

%.o : %.cpp
	${GCC} ${FLAGS} -c $< -o $@ -MD

include ${wildcard ${D_FILES}}

clean:
	rm -rf ${OBJS} ${D_FILES}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
