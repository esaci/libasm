# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elias <elias@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/08 15:35:09 by elias             #+#    #+#              #
#    Updated: 2021/04/09 13:09:55 by elias            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_strlen.s \
	ft_strcpy.s \
	ft_strcmp.s \
	ft_write.s \

OBJS = $(SRCS:.s=.o)
NAME = libasm.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.s
	nasm -f elf64 $<

clean : 
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
