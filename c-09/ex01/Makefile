SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o

NAME	= libft.a
CC	= gcc
CFLAGS	= -Wall -Werror -Wextra -c
HEADER	= -I includes/

libft.a:	${OBJS}
		ar rc libft.a ${OBJS}
all:		libft.a

srcs/%.c: srcs/%.o
		${CC} ${CFLAGS} -c $< -o &@ ${HEADER}

clean:
		rm -f ${OBJS}

fclean:
		rm -f ${NAME} ${OBJS}

re:
		rm -f ${NAME} ${OBJS}
		make all
