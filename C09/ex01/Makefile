CC = gcc
AR = ar
ARFLAGS = -rcs
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
INCDIR = ./includes/
SRCDIR = ./srcs/
SRCS = $(addprefix $(SRCDIR), $(CFILE))
CFILE = ft_putchar.c ft_strlen.c ft_putstr.c ft_swap.c ft_strcmp.c
OFILES = $(SRCS:.c=.o)

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCDIR)

$(NAME): $(OFILES)
	$(AR) $(ARFLAGS) $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
