SRCS 		= main.c

NAME		= ft_cat
CC		= gcc
CFLAGS		= -Wall -Werror -Wextra -c

.PHONY:		all clean fclean

all:
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
		rm -f srcs/*.o *.o

fclean:
		rm -f ${NAME}