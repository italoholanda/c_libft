C_SOURCE = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c \
			ft_isascii.c ft_isprint.c ft_strlen.c \
			ft_memset.c ft_bzero.c ft_memcpy.c \
			ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c \
			ft_strnstr.c ft_atoi.c ft_calloc.c \
			ft_strdup.c

NAME = libft.a

CFLAGS = -Wextra -Werror -Wall

CC = gcc

RM = rm -f

OBJ=$(C_SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar crs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

 .PHONY: all clean fclean re
