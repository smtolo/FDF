# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smtolo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/28 13:23:16 by smtolo            #+#    #+#              #
#    Updated: 2018/08/30 14:33:27 by smtolo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

FLAGS = -Wall -Wextra -Werror

SRC_DIR = ./src/
OBJ_DIR = ./obj/
INC_DIR = ./includes/
LIBFT_DIR = ./libft/

SRC_FILES = main.c readmap.c keys.c drawer.c drawer2.c

OBJ_FILES = $(SRC_FILES:.c=.o)

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))
LIBFT = $(addprefix $(LIBFT_DIR), libft.a)

LNK  = -L $(LIBFT_DIR) -lft -lmlx -framework OpenGL -framework AppKit

all: obj $(LIBFT) $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)
$(OBJ_DIR)%.o:$(SRC_DIR)%.c
	@gcc $(FLAGS) -I $(LIBFT_DIR) -I $(INC_DIR) -o $@ -c $<

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJ)
	@echo "Your are now compiling fdf. It appears you are the honourable "\
	"Mr SMtolo if not leave my project alone dude!!"
	@gcc $(OBJ) $(LNK) -lm -o $(NAME)
	@echo "an executable called $(NAME) has been .. uhm ?? could not find the word"

clean:
	@rm -Rf $(OBJ_DIR)
	@make -C $(LIBFT_DIR) clean
	@echo "All ".o" files are gone"

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@echo "Damn !! you even removed the executable"

re: fclean all
	@echo "Everything has been  removed man"
	@ls
