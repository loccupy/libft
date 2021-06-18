NAME 			= 	libft.a
SRC				=	ft_isalnum.c \
					ft_memcmp.c \
					ft_isprint.c \
					ft_isascii.c \
					ft_strlcat.c \
					ft_strncmp.c \
					ft_atoi.c \
					ft_isalpha.c \
					ft_memcpy.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strlcpy.c \
					ft_strnstr.c \
					ft_tolower.c \
					ft_bzero.c \
					ft_memccpy.c \
					ft_memmove.c \
					ft_strlen.c \
					ft_strdup.c \
					ft_toupper.c \
					ft_isdigit.c \
					ft_memchr.c \
					ft_memset.c \
					ft_calloc.c \
					ft_substr.c \
					ft_strjoin.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
					ft_strmapi.c \
					ft_strtrim.c \
					ft_itoa.c \
					ft_split.c \

OBJ				= $(SRC:.c=.o)
FLAGS 			= -Wall -Wextra -Werror
all:			$(NAME)
$(NAME): 		$(OBJ) 
				ar rcs $(NAME) $?
%.o:			%.c libft.h
					gcc $(FLAGS) -c $< -o $@
clean:			
				rm -rf *.o
fclean: 		clean
				rm -rf $(NAME) *.o
re: 			fclean all
.PHONY: 		all clean fclean re 