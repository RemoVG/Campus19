# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: revan-ga <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/06 14:02:20 by revan-ga          #+#    #+#              #
#    Updated: 2025/05/09 12:40:47 by revan-ga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
AR		=	ar rcs
RM		=	rm -rf

SRC		=	ft_printf ft_putvoid ft_putchar ft_putnbr ft_putstr \
ft_putunbr ft_puthex 

SRCS	=	$(addsuffix .c, $(SRC))

OBJS	= 	$(SRCS:.c=.o)

all: 		$(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS) 

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
