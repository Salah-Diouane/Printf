SRC =  ft_printf.c	ft_printadresse.c	ft_format.c	ft_putchar.c 	ft_putstring.c   ft_putnbr.c 

OBJ = $(SRC:c=o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

NAME = libftprintf.a

all : $(NAME)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	ar rcs $@ $^

clean :
	$(RM) $(OBJ)

fclean :clean
	$(RM) $(NAME)

re : fclean all
