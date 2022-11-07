# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajeannin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 18:51:40 by ajeannin          #+#    #+#              #
#    Updated: 2022/10/07 15:33:11 by ajeannin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

########## VARIABLES ##########

NAME			= libftprintf.a
INCLUDES		= includes
LIBFT			= libft
SRC_DIR			= src/
OBJ_DIR			= obj/
CC			= gcc
CFLAGS			= -Wall -Werror -Wextra -I



########### SOURCES ###########

SRC_FILES		= ft_printf		\
			  ft_print_hexa		\
			  ft_print_percent	\
			  ft_print_ptr		\
			  ft_print_str_nbr	\
			  ft_print_unsigned	\

SRC			= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ			= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
OBJF			= .cache_exists


############ RULES ############

all:		$(NAME)

$(NAME):	$(OBJ)
	make -C $(LIBFT)
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
	gcc $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJF):
	mkdir -p $(OBJ_DIR)

clean:		
	rm -rf $(OBJ_DIR)

fclean:		clean
	rm -f $(NAME)
	rm -f $(LIBFT)/libft.a

re:		fclean all




