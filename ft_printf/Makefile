# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 10:09:58 by mbouaza           #+#    #+#              #
#    Updated: 2023/01/19 03:07:21 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# - NAME -----------------------------------------------------------------------

NAME 	= libftprintf.a

# - FLAGS ----------------------------------------------------------------------

CC 		= @gcc

CFLAGS 	= -Wall -Werror -Wextra

# - COLORS ---------------------------------------------------------------------

GREY 	:= "\033[1;30m"
RED 	:=	"\033[1;31m"
GREEN 	:= "\033[1;32m"
YELLOW 	:= "\033[1;33m"
BLUE	:=	"\033[1;36m"
PURPLE	:=	"\033[1;35m"
WHITE	:=	"\033[1;37m"
END		:=	"\033[0;0m"

# - MESSAGE --------------------------------------------------------------------

COMPILATION :	ft_printf has been successfully compiled!

CLEAN 		:	all .o have been correctly removed

# - SRC ------------------------------------------------------------------------

SRC 	=	ft_printf.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_strlen.c \
			ft_putnbr_unsigned.c \
			ft_putnbr_hex_maj.c \
			ft_putnbr_hex_min.c \
			ft_put_ptr.c

OBJS 	= $(SRC:.c=.o)

# - COMPILATION ----------------------------------------------------------------

all: $(NAME)

$(NAME) : $(OBJS)
	@ar -rcs $(NAME) $(OBJS)
	@echo $(GREEN)"$(COMPILATION)"$(END)

# - CLEAN ----------------------------------------------------------------------

clean :
	@rm -f $(OBJS)
	@echo $(RED)"$(CLEAN)"$(END)

fclean: clean
	@rm -f $(NAME)

re : fclean all

# ------------------------------------------------------------------------------

LOL :
	@echo $(BLUE)"can you take a shower please ..."$(END)
