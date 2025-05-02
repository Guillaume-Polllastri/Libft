# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 20:41:38 by gpollast          #+#    #+#              #
#    Updated: 2025/05/02 11:28:36 by gpollast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
AR = ar
CFLAGS = -Wall -Werror -Wextra -I.
NAME = libft.a
SRCS = 	srcs/ft_isalpha.c \
	srcs/ft_isdigit.c \
	srcs/ft_isalnum.c \
	srcs/ft_isascii.c \
	srcs/ft_isprint.c \
	srcs/ft_strlen.c \
	srcs/ft_memset.c \
	srcs/ft_bzero.c \
	srcs/ft_memcpy.c \
	srcs/ft_memmove.c \
	srcs/ft_strlcpy.c \
	srcs/ft_strlcat.c \
	srcs/ft_toupper.c \
	srcs/ft_tolower.c \
	srcs/ft_strchr.c \
	srcs/ft_strrchr.c \
	srcs/ft_strncmp.c \
	srcs/ft_memchr.c \
	srcs/ft_memcmp.c \
	srcs/ft_strnstr.c \
	srcs/ft_atoi.c \
	srcs/ft_calloc.c \
	srcs/ft_strdup.c \
	srcs/ft_substr.c \
	srcs/ft_strjoin.c \
	srcs/ft_strtrim.c \
	srcs/ft_split.c \
	srcs/ft_itoa.c \
	srcs/ft_strmapi.c \
	srcs/ft_striteri.c \
	srcs/ft_putchar_fd.c \
	srcs/ft_putstr_fd.c \
	srcs/ft_putendl_fd.c \
	srcs/ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)
TARGET = $(NAME)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
all: $(TARGET)
$(TARGET): $(OBJS)
	$(AR) -rcs $(TARGET) $(OBJS)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(TARGET)
re: fclean all
.PHONY: all $(TARGET) clean fclean re
