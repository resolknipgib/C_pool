SRCS 		= srcs/main.c srcs/main2.c srcs/fun.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_isspace.c srcs/ft_str_is_numeric.c srcs/ft_strstr.c srcs/ft_char_is_alpha.c srcs/ft_strlen.c srcs/ft_atoi.c srcs/lowthous.c

NAME		= rush-02
CC		= gcc
CFLAGS		= -Wall -Werror -Wextra

.PHONY:		all clean fclean

all:
		@${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
		rm -f srcs/*.o *.o

fclean:
		rm -f ${NAME}