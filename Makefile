# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgrosjea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 15:50:41 by bgrosjea          #+#    #+#              #
#    Updated: 2023/11/04 17:36:53 by bgrosjea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

NAME		= libftprintf.a
INCLUDE		= include
LIBFT		= Libft
SRC_DIR		= ./src/
OBJ_DIR		= ./obj/
CC		= gcc
CFLAGS		= -Wall -Wextra -Werror -I
RM		= rm -f
AR		= ar -crs

# Colors

DEF_COLOR 	= \033[0;39m
GRAY		= \033[090m
RED		= \033[91m
GREEN		= \033[092m
YELLOW		= \033[0;93m
BLUE		= \033[0;94m
MAGENTA		= \033[0;95m
CYAN		= \033[0;96m
WHITE		= \033[0;97m

CURS_POS	= \033[<1>;<1>H

GRAS		= \033[1m
SOULIGNE	= \033[4m
INV_COLOR	= \033[37m

# Sources

SRC_FILES	= ft_printf ft_prints ft_printnbr
#SRC		= $(foreach, f, $(SRC_FILES), src/$(f))
SRC		= $(addprefix $(SRC-DIR), $(addsuffix, .c, $(SRC_FILES)))
OBJ		= $(addprefix$(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

###

OBJF		= .cache_exists

all:		$(NAME)

$(NAME):	$(OBJ)
		@make -C $(LIBFT)
		@cp Libft/libft.a .
		@mv libft.a $(NAME)
		@$(AR) $(NAME) $(OBJ)
		@echo "$(GREEN)ft_printf objects files cleaned!$(DEF_COLOR)"

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c | $(OBJF)
		@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
		@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJF):
		@mkdir -p $(OBJ_DIR)

clean:		
		@$(RM) -rf $(NAME)
		@make clean -C $(LIBFT)
		@echo "$(BLUE)ft_printf object files cleaned!$(DEF_COLOR)"

fclean:		clean
		@$(RM) -f $(NAME)
		@$(RM) -f $(LIBFT)/libft.a
		@echo "$(CYAN)ft_printf and Libft executable files cleaned!$(DEF_COLOR)"

re:		fclean all
		@echo "$(GREEN)Cleaned and rebuilt everything for ft_printf!$(DEF_COLOR)"

norm:		
		@norminette	$(SRC)	$(INCLUDE)	$(LIBFT) | grep -v Norme -B1 || true

.PHONY:		all clean fclean re norm
