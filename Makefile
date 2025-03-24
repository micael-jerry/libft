NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES_DIR = ./includes

SRC_DIR = ./src
SRCS = \
	char/ft_isalnum.c char/ft_isalpha.c char/ft_isascii.c char/ft_isdigit.c char/ft_isprint.c char/ft_tolower.c char/ft_toupper.c \
	list/ft_lstadd_back.c list/ft_lstadd_front.c list/ft_lstclear.c list/ft_lstdelone.c list/ft_lstiter.c list/ft_lstlast.c list/ft_lstmap.c list/ft_lstnew.c list/ft_lstsize.c \
	memory/ft_bzero.c memory/ft_calloc.c memory/ft_memchr.c memory/ft_memcmp.c memory/ft_memcpy.c memory/ft_memmove.c memory/ft_memset.c \
	num/ft_itoa.c \
	print/ft_putchar_fd.c print/ft_putendl_fd.c print/ft_putnbr_fd.c print/ft_putstr_fd.c \
	str/ft_split.c str/ft_strchr.c str/ft_strdup.c str/ft_striteri.c str/ft_strjoin.c str/ft_strlcat.c str/ft_strlcpy.c str/ft_strlen.c str/ft_strmapi.c str/ft_strncmp.c str/ft_strnstr.c str/ft_strrchr.c str/ft_strtrim.c str/ft_substr.c \
	matrix/ft_matrixfree.c matrix/ft_matrixsize.c \
	binary/ft_binary_convert.c

OBJ_DIR = ./obj
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -o $@ -c $<

$(NAME): $(addprefix $(OBJ_DIR)/, $(OBJS))
	ar rc $(NAME) $(addprefix $(OBJ_DIR)/, $(OBJS))

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
