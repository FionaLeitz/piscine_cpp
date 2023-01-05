# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fleitz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 16:10:16 by fleitz            #+#    #+#              #
#    Updated: 2022/12/08 12:05:13 by fleitz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

_END=$'\033[0m
_GREEN=$'\033[1;32m
_YELLOW=$'\033[1;33m
_ORANGE=$'\033[38;2;255;165;0m

NAME		= easy_find

SRCS		= main.cpp					\
			  srcs/Span.cpp				\
			  
CC			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJS		= ${addprefix objs/, ${SRCS:%.cpp=%.o}}

DEPS		= ${addprefix objs/, ${SRCS:%.cpp=%.d}}

all:		${NAME}

${NAME}:	${OBJS}
			@echo "${_GREEN}-------------- EASY FIND --------------${_END}"
			@echo "${_ORANGE}Objects ${NAME} created${_END}"
			@${CC} ${CXXFLAGS} -o ${NAME} ${OBJS}
			@echo "${_GREEN}--> ${NAME} compiled succesfully !${_END}"

objs/%.o:	%.cpp
			@mkdir -p objs/srcs
			${CC} ${CXXFLAGS} -c $< -o $@ -MMD

clean:
			@rm -rf objs
			@echo "${_YELLOW}Objects ${NAME} cleaned !${_END}"

fclean:		clean
			@rm -f ${NAME}
			@echo "${_YELLOW}${NAME} cleaned !${_END}"

re:			fclean all

.PHONY:		all clean fclean re

-include ${DEPS}
