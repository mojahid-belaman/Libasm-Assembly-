# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbelaman <mbelaman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 14:30:35 by mbelaman          #+#    #+#              #
#    Updated: 2020/12/10 11:45:53 by mbelaman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRC =	ft_strlen.s ft_strcpy.s ft_write.s ft_read.s ft_strcmp.s ft_strdup.s

OBJ_SRC = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ_SRC)
	ar rcs $(NAME) $^

%.o: %.s
	nasm -f macho64 $< -o $@

clean:
	rm -rf $(OBJ_SRC)

fclean: clean
	rm -rf $(NAME) 

re: fclean all
