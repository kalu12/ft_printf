# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/02 13:51:38 by luvuceno          #+#    #+#              #
#    Updated: 2023/03/03 13:25:25 by luvuceno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
	
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printchar.c ft_printhex.c  ft_printstring.c ft_printupperhex.c ft_putnbr_fd.c \
	  ft_printf.c ft_printinteger.c ft_printpointer.c ft_printunsigned.c ft_putchar_fd.c ft_putstr_fd.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

# $(OBJ):
# 	$(CC) $(FLAGS) $(SRC)

# test: $(SRC)
# 	$(CC) $(FLAGS) $(SRC)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all