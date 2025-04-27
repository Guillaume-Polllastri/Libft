# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 20:41:38 by gpollast          #+#    #+#              #
#    Updated: 2025/04/27 21:12:55 by gpollast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
AR = ar
CFLAGS = -Wall -Werror -Wextra -I.
TARGET = libft.a
SRCS = 	srcs/ft_memset.c
OBJS = $(SRCS:.c=.o)
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
