SRCS = 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putnb_fd.c \
ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
ft_strim.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c \ 


OBJS = ${SRCS:.c=.o}

NAME = libft.a

CC = gcc

RM = rm -f

NORMINETTE = norminette -R CheckDefine

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}


${NAME}:	${OBJS}
	$(CC) $(CFLAGS) -o ${NAME}  ${OBJS}

all:	${NAME}

clean:
	rm ${OBJS}

fclean: clean
	${RM} ${NAME}

norm:
	$(NORMINETTE)


.PHONY: all clean fclean