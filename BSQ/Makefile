# Variables
NAME = bsq
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -o bsq
SRCDIR = ./src
SOURCES = $(SRCDIR)/main.c $(SRCDIR)/input.c $(SRCDIR)/solve.c \
		  $(SRCDIR)/utils.c $(SRCDIR)/grid.c
INCLUDES = -I./include/

# Rules
$(NAME) : 
	$(CC) $(CFLAGS) $(SOURCES)
clean :
	rm -f $(NAME)
fclean : clean

re : fclean all 

all : $(NAME)
