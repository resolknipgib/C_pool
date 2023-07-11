SRCS 		= srcs/main.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/check.c srcs/ft_atoi.c srcs/ft_get_map_from_file.c srcs/ft_file_to_str.c srcs/ft_split.c srcs/ft_str_is_printable.c srcs/ft_get_int_map.c srcs/ft_find_proportions.c srcs/ft_get_input_map.c

NAME		= bsq
CC		= gcc
CFLAGS		= -Wall -Werror -Wextra

.PHONY:		all clean fclean

${NAME}:
		@${CC} ${CFLAGS} ${SRCS} -o ${NAME}
all:
	${NAME}

clean:
		rm -f srcs/*.o *.o

fclean:
		rm -f ${NAME}