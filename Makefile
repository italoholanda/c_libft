CC = gcc
FLAGS = -Wall -Werror -Wextra

FILES = ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strlcpy.c \
		ft_strlen.c \
		main.c \

OBJ = $(FILES:%.c=%.o)

all: run
	clear
	./run

# Execute
run: $(OBJ)
	$(CC) $(FLAGS) -o run $(OBJ)

# Compile functions to .(o)objects
$(OBJ): %o: %c
	$(CC) $(FLAGS) -c $< -o $@

clear:
	rm *.o run
