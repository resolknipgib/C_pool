SRCS 	= srcs/main.c srcs/calc.c srcs/ft_atoi.c srcs/ft_putnbr.c srcs/ft_putstr.c srcs/ft_putchar.c

NAME	= do-op
CC	= gcc
CFLAGS	= -Wall -Werror -Wextra

.PHONY:	all clean fclean

all:
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
	rm -f srcs/*.o *.o

fclean:
	rm -f ${NAME}

