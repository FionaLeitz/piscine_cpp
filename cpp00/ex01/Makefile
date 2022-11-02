# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fleitz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 14:58:24 by fleitz            #+#    #+#              #
#    Updated: 2022/11/02 14:58:27 by fleitz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

_END=$'\033[0m
_GREEN=$'\033[1;32m
_YELLOW=$'\033[1;33m
_ORANGE=$'\033[38;2;255;165;0m

NAME		= PhoneBook

SRCS		= phonebook.cpp			\

CC			= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

OBJS		= ${SRCS:%.cpp=%.o}

all:		${NAME}

${NAME}:	${OBJS}
			@echo "${_GREEN}-------------- PHONEBOOK --------------${_END}"
			@echo "${_ORANGE}Objects ${NAME} created${_END}"
			@${CC} ${CFLAGS} -o ${NAME} ${OBJS}
			@echo "${_GREEN}-->${NAME} compiled succesfully !${_END}"

clean:
			@rm -rf ${OBJS}
			@echo "${_YELLOW}Objects ${NAME} cleaned !${_END}"

fclean:		clean
			@rm -f ${NAME}
			@echo "${_YELLOW}${NAME} cleaned !${_END}"

re:			fclean all

.PHONY:		all clean fclean re
