# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 16:22:53 by danbarbo          #+#    #+#              #
#    Updated: 2023/11/13 20:38:16 by danbarbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= cc
FLAGS		= -Wall -Wextra -Werror -c
INCLUDE		= include

SRC			= ${addprefix src/, \
				ft_printf.c \
				print_char.c \
				print_hex_nbr.c \
				print_nbr.c \
				print_str.c \
				print_unsig_nbr.c \
				print_pointer.c \
				}
OBJ			= ${SRC:src/%.c=obj/%.o}

all: ${NAME}
${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

obj/%.o: src/%.c
# @mkdir -p obj
	$(shell if [ ! -d obj ]; then mkdir -p obj; fi)
	${CC} ${FLAGS} -I ${INCLUDE} $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f ${NAME}

# makedir:
# # $(shell if [ -d obj/ ])
# ifeq (${wildcard obj}, )
# 	mkdir -p obj
# endif

re: fclean all

.PHONY: all libft clean fclean re makedir
