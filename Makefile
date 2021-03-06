# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: engooh <engooh@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/22 02:02:45 by engooh            #+#    #+#              #
#    Updated: 2022/07/22 17:03:44 by engooh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                                                              #
#                               INCLUDES                                       # 
#                                                                              #
################################################################################
INC = -I ./include

################################################################################
#                                                                              #
#                               SOURCE FILES                                   # 
#                                                                              #
################################################################################
SRC =	./source/parsing/parser.c \
	./source/parsing/parser_utils.c\
	./source/main/main.c
		
################################################################################
#                                                                              #
#                               OBJECT FILES                                   # 
#                                                                              #
################################################################################
OBJ = ${SRC:%.c=%.o}

################################################################################
#                                                                              #
#                               LIBRARY                                        # 
#                                                                              #
################################################################################
LIB = ./source/share/libft/libft.a

################################################################################
#                                                                              #
#                               DEPENDENCE                                     # 
#                                                                              #
################################################################################
DEPS = ${SRC:%.c=%.d}

################################################################################
#                                                                              #
#                               COMPILATIONS FLAGS                             # 
#                                                                              #
################################################################################
CC = gcc
CFLAG = -g3 -Werror -Wall -Wextra 

################################################################################
#                                                                              #
#                               OTHER MAKE                                     # 
#                                                                              #
################################################################################
NAME = minishell
PATH_LIBFT = ./source/share/libft/

################################################################################
#                                                                              #
#                               RULES                                          # 
#                                                                              #
################################################################################
all: MAKE_LIBFT $(NAME)

$(NAME) : $(OBJ)
	$(CC) -g3 $(CFLAG) $(OBJ) $(LIB) -lreadline -o $@ $(INC)

MAKE_LIBFT:
	make -C $(PATH_LIBFT)

%.o: %.c
	$(CC) $(CFLAG) -MMD -c $< -o $@ $(INC)

clean:
	rm -f $(OBJ)
	rm -f $(DEPS)
	make clean -C $(PATH_LIBFT)

fclean : clean
	rm -f $(NAME)
	make - fclean -C $(PATH_LIBFT)

re: fclean
	make all

.PHONY: all fclean clean re 
