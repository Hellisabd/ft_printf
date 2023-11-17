NAME	= libftprintf.a

SRCS	= src/ft_printf.c	\
	  src/ft_printnbr.c	\
	  src/ft_prints.c	\
	  src/ft_itoa_baseprintf.c	

OBJS	= $(SRCS:.c=.o)

CC	= gcc

CFLAGS	+= -Wall -Wextra -Werror -g3

RM	= rm -rf

all	: $(NAME)

$(NAME) : $(OBJS)
	  @make -C Libft
	  @cp Libft/libft.a .
	  @mv libft.a $(NAME)
	  ar -crs $(NAME) $(OBJS)

clean : 
	$(RM) $(OBJS)
	@make -C Libft clean

fclean : 
	$(RM) $(NAME) $(OBJS)
	@make -C Libft fclean

re :	fclean all

ex :	fclean all clean
