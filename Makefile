# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sstoliar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/11 19:46:04 by sstoliar          #+#    #+#              #
#    Updated: 2018/11/11 19:46:07 by sstoliar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c *.c
	ar rc $(NAME).a *.o
	ranlib $(NAME).a

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME).a

re: fclean all

check:
	gcc $(FLAGS) -c *.c
	rm -f *.o

norm:
	norminette *.c *.h

fcheck: norm check
