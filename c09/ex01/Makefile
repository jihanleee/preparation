SRCS	= ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CFLAGS 	= -Wall -Wextra -Werror -Iincludes

.c.o:
	gcc -c ${CFLAGS} $< -o ${<:.c=.o}
		
libft.a: ${OBJS}
	ar -rc ${NAME} ./srcs/*.o

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY:	clean fclean all re
