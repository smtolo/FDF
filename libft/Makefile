# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smtolo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/01 13:37:16 by smtolo            #+#    #+#              #
#    Updated: 2018/08/03 14:21:20 by smtolo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
      ft_isprint.c ft_isspace.c ft_itoa.c ft_lstadd.c ft_lstdel.c ft_lstmap.c \
	  ft_lstdelone.c ft_lstiter.c ft_lstnew.c ft_memalloc.c ft_memccpy.c\
	  ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c\
	  ft_putchar_fd.c ft_putchar.c ft_putendl_fd.c ft_putendl.c ft_putnbr_fd.c\
	  ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c\
	  ft_strcpy.c ft_strcmp.c ft_strdup.c ft_strequ.c ft_striter.c ft_strstr.c\
	  ft_striteri.c ft_strdel.c ft_strncat.c ft_strncmp.c ft_strncpy.c\
	  ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c\
	  ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c\
	  ft_strnstr.c ft_strrchr.c ft_strrev.c ft_strsplit.c ft_strsub.c\
	  ft_strtrim.c ft_tolower.c ft_toupper.c ft_wordcount.c ft_putnbr.c\
	  get_next_line.c

OBJ = $(SRC:.c=.o)

HEADER = libft.h

FLAG = Wall -Werror -Wextra

all : $(NAME)

$(NAME):
		gcc -c -I $(HEADER) $(SRC)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:
		rm -f $(OBJ)
		rm -f $(NAME)

re: fclean all
