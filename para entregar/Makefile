# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 16:22:53 by danbarbo          #+#    #+#              #
#    Updated: 2023/11/14 13:56:26 by danbarbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CC		= cc
FLAGS	= -Wall -Wextra -Werror -c
INCLUDE	= include

SRC		= ${addprefix src/, \
				ft_printf.c \
				print_char.c \
				print_hex_nbr.c \
				print_nbr.c \
				print_str.c \
				print_unsig_nbr.c \
				print_pointer.c \
			}
OBJ		= ${SRC:src/%.c=obj/%.o}
SRC_BONUS	= ${addprefix src_bonus/, \
				ft_printf_bonus.c \
				print_char_bonus.c \
				print_hex_nbr_bonus.c \
				print_nbr_bonus.c \
				print_str_bonus.c \
				print_unsig_nbr_bonus.c \
				print_pointer_bonus.c \
			}
OBJ_BONUS	= ${SRC_BONUS:src_bonus/%.c=obj/%.o}

all: ${NAME}
${NAME}: ${OBJ}
bonus: fclean ${OBJ_BONUS}

obj/%.o: src/%.c
	$(shell if [ ! -d obj ]; then mkdir -p obj; fi)
	${CC} ${FLAGS} -I ${INCLUDE} $< -o $@
	ar rcs ${NAME} $@

obj/%.o: src_bonus/%.c
	$(shell if [ ! -d obj ]; then mkdir -p obj; fi)
	${CC} ${FLAGS} -I ${INCLUDE} $< -o $@
	ar rcs ${NAME} $@

clean:
	rm -rf obj

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
