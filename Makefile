# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lenygarcia <marvin@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/06 20:35:06 by lenygarcia        #+#    #+#              #
#    Updated: 2025/03/10 11:15:15 by lenygarcia       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= cc -g
CFLAGS	= -Wall -Wextra -Werror
SRCS	= $(wildcard *.c)
BON	= $(wildcard *bonus.c)
HEADERS	= libft.h
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
OBJ	= ${BON:.c=.o}

all: ${NAME}

$(NAME): $(OBJS)
	@ar rcs $(NAME) $^
	@echo "libft.a ready"

%.o: %.c ${HEADERS}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re:	fclean all

bonus:	all
	${BON}
