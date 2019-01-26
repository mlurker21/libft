# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlurker <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/12 00:09:22 by mlurker           #+#    #+#              #
#    Updated: 2018/12/12 00:09:26 by mlurker          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_*.c

HEADER = libft.h

all: $(NAME)

$(NAME):
		gcc -c $(SRCS) -I$(HEADER) -Werror -Wall -Wextra
		ar rc $(NAME) ft_*.o

clean:
		/bin/rm -f ft_*.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
