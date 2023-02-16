
CC	=	gcc

SRC =	characters/ft_isalnum.c	\
		characters/ft_isalpha.c	\
		characters/ft_isascii.c	\
		characters/ft_isdigit.c	\
		characters/ft_isprint.c	\
		characters/ft_isspace.c	\
		characters/ft_toupper.c	\
		characters/ft_tolower.c	\
		file_descriptor/ft_putchar_fd.c	\
		file_descriptor/ft_putendl_fd.c	\
		file_descriptor/ft_putnbr_fd.c	\
		file_descriptor/ft_putstr_fd.c	\
		integers/ft_atoi.c		\
		integers/ft_intlen.c		\
		linked_list/ft_lstadd_back.c	\
		linked_list/ft_lstadd_front.c	\
		linked_list/ft_lstclear.c	\
		linked_list/ft_lstdelone.c	\
		linked_list/ft_lstiter.c	\
		linked_list/ft_lstlast.c	\
		linked_list/ft_lstmap.c	\
		linked_list/ft_lstnew.c	\
		linked_list/ft_lstsize.c	\
		memory/ft_bzero.c		\
		memory/ft_calloc.c		\
		memory/ft_memchr.c		\
		memory/ft_memcmp.c		\
		memory/ft_memcpy.c		\
		memory/ft_memmove.c	\
		memory/ft_memset.c		\
		memory/ft_realloc.c	\
		sorts/ft_array_max.c	\
		sorts/ft_array_min.c	\
		sorts/ft_sort_bubble.c	\
		sorts/ft_sort_selection.c	\
		sorts/ft_swap.c	\
		strings/ft_itoa.c	\
		strings/ft_revstr.c	\
		strings/ft_split.c		\
		strings/ft_strchr.c		\
		strings/ft_strdup.c		\
		strings/ft_striteri.c	\
		strings/ft_strjoin.c	\
		strings/ft_strlcat.c	\
		strings/ft_strlcpy.c	\
		strings/ft_strlen.c		\
		strings/ft_strmapi.c	\
		strings/ft_strncmp.c	\
		strings/ft_strndup.c	\
		strings/ft_strnlen.c	\
		strings/ft_strnstr.c	\
		strings/ft_strrchr.c	\
		strings/ft_strtrim.c	\
		strings/ft_substr.c

#		sorts/ft_sort_bucket.c	\
		sorts/ft_sort_merge.c	\
		sorts/ft_sort_radix.c	\

HEADERS	=	libft.h

NAME	=	libft.a

BUILDDIR	=	.obj

CFLAGS	=	-Wall -Wextra -Werror -I.$(HEADERS)

OBJ			=	$(SRC:%.c=$(BUILDDIR)/%.o)

all:	$(NAME)

fclean:	clean
	@echo -e "\033[1;31mRemoving $(NAME)\033[0m"
	@rm -f $(NAME)

clean:
	@echo -e "\033[1;31mRemoving object files (.o) in $(BUILDDIR) directory\033[0m"
	@rm -rf $(BUILDDIR)

re:	fclean all

$(NAME):	$(OBJ)
	@echo -e "\033[1;32mBuilding $(NAME)\033[0m"
	@ar rc $(NAME) $(OBJ)

$(BUILDDIR)/%.o: %.c $(HEADERS) Makefile
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY:	all clean fclean re
