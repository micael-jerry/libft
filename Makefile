NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES_HEADER = ./
SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJECTS = $(SOURCES:.c=.o)

SOURCES_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c
OBJECTS_BONUS = $(SOURCES_BONUS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDES_HEADER) -o $@ -c $<

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

bonus: $(OBJECTS) $(OBJECTS_BONUS)
	ar rc $(NAME) $(OBJECTS) $(OBJECTS_BONUS)

clean:
	rm -rf $(wildcard *.o)

fclean:
	rm -rf $(NAME)

proper: clean fclean

re: fclean all

.PHONY: all clean fclean proper re
