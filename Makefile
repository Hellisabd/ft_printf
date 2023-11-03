# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgrosjea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 15:50:41 by bgrosjea          #+#    #+#              #
#    Updated: 2023/11/03 16:51:01 by bgrosjea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

NAME		= libftprintf.a
INCLUDE		= include
LIBFT		= libft
SRC_DIR		= src/
OBJ_DIR		= obj/
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

SRC_FILES	= ft_printf.c 
SRC		= $(foreach, f, $(SRC_FILES), src/$(f))

###

all:		$(NAME)
$(NAME):
