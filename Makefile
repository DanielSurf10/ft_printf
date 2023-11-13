# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 16:22:53 by danbarbo          #+#    #+#              #
#    Updated: 2023/11/10 19:36:57 by danbarbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= cc
FLAGS		= -Wall -Wextra -Werror -c
INCLUDE		= .
DEPENCIES	= libft

SRC			= ${wildcard *.c}
SRC_DEPEND	= libft/libft.a
OBJ			= ${SRC:%.c=%.o}

all: ${NAME}
all: ${NAME}
${NAME}: ${OBJ}

${DEPENCIES}:
	make -C $@

%.o: %.c
	${CC} ${FLAGS} -I ${INCLUDE} ${SRC_DEPEND} $< -o $@
	ar rcs ${NAME} $@

clean:
	# for dep in $(DEPENCIES); do \
	# 	$(MAKE) -C $$dep clean; \
	# done
	rm -f *.o

fclean: clean
	# for dep in $(DEPENCIES); do \
	# 	$(MAKE) -C $$dep fclean; \
	# done
	rm -f ${NAME}

re: fclean all

.PHONY: all libft clean fclean re
