# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/13 22:47:33 by amtan             #+#    #+#              #
#    Updated: 2025/08/13 22:48:04 by amtan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a

SRCDIR  = srcs
INCDIR  = includes

SRCS    = $(SRCDIR)/ft_putchar.c \
          $(SRCDIR)/ft_swap.c    \
          $(SRCDIR)/ft_putstr.c  \
          $(SRCDIR)/ft_strlen.c  \
          $(SRCDIR)/ft_strcmp.c

OBJS    = $(SRCS:.c=.o)

CC      = cc
CFLAGS  = -Wall -Wextra -Werror -I $(INCDIR)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(SRCDIR)/%.o: $(SRCDIR)/%.c $(INCDIR)/ft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
