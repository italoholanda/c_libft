# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/04 13:39:36 by igomes-h          #+#    #+#              #
#    Updated: 2021/09/06 14:02:14 by igomes-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# STATIC LIBRARY NAME
NAME = libft.a

# SOURCE FILES (*.c)
SOURCES = \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c \
	ft_strdup.c ft_memcmp.c \
	ft_substr.c

# OBJECTS FILES (*.o)
OBJECTS = $(SOURCES:.c=.o)

# DEFAULT C COMPILER
CC = gcc

# DEFAULT COMPILER FLAGS
CFLAGS = -Wall -Werror -Wextra

# DEFAULT RM SYNTAX
RM = rm -f

# MAKE STATIC LIBRARY
MKLIB = ar -rcs

# DEFAULT MAKE EXECUTION
all: $(SOURCES) $(OBJECTS) $(NAME)

# MAKE STATIC LIBRARY EXECUTION
$(NAME):
	$(MKLIB) $(NAME) $(OBJECTS)

# CLEAN ALL OBJECTS
clean:
	$(RM) $(OBJECTS)

# CLEAN ALL OBJECTS AND STATIC LIBRARY
fclean:
	$(RM) $(OBJECTS) $(NAME)

# CLEAN ALL AND RECOMPILE
re:
	make fclean
	make all
