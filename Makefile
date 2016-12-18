# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/18 15:31:56 by dpaunovi          #+#    #+#              #
#    Updated: 2016/12/18 20:17:38 by dpaunovi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LDFLAGS =
LIB = ft
LIBDIR = Libft
SRC = main.c file_to_tab.c check.c modif_tab.c convert.c square.c join_tetri.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@cd $(LIBDIR) && make
	@$(CC) -L $(LIBDIR) -l$(LIB) $(LDFLAGS) -o $@ $(OBJ)
	@echo "\033[32mfillit created"

%.o : %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: clean fclean re

clean:
	@rm -rf $(OBJ)
	@cd $(LIBDIR) && make clean
	@echo "\033[36mFiles .o has been deleted"

fclean: clean
	@rm -rf $(NAME)
	@cd $(LIBDIR) && make fclean
	@echo "\033[31mfillit deleted"

re: fclean all
