# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 17:09:13 by ayael-ou          #+#    #+#              #
#    Updated: 2023/12/04 17:36:44 by ayael-ou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Materia

SRC_DIR = ./
SRCS = 	Ice.cpp\
		main.cpp\
		Cure.cpp\
		Materia.cpp\
		Character.cpp\
		Materia_source.cpp\

OBJS = ${SRCS:.cpp=.o}
CC = c++
RM = rm -rf

%.o: %.cpp
	${CC} -c $< -o $@ -std=c++98 -Wall -Wextra -Werror -g3

${NAME}: ${OBJS}
	${CC} ${OBJS} -o ${NAME}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re