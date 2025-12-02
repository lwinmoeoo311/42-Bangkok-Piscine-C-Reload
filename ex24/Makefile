NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCDIR = srcs
HEADDIR = includes

SRC = $(SRCDIR)/ft_putchar.c\
      $(SRCDIR)/ft_putstr.c\
      $(SRCDIR)/ft_strcmp.c\
      $(SRCDIR)/ft_strlen.c\
      $(SRCDIR)/ft_swap.c

OBJ = $(SRC:.c=.o)

AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o:%.c $(HEADDIR)/.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
