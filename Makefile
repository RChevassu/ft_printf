# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchevass <rchevass@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/18 15:27:54 by rchevass          #+#    #+#              #
#    Updated: 2018/10/05 01:16:03 by rchevass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a

OBJ_PATH = obj
LIB_PATH = libft
SRC_PATH = src

SRC =	/ft_memset.c\
		/ft_numlen.c\
	/ft_bzero.c\
	/ft_swap.c\
	/ft_memcpy.c\
	/ft_memccpy.c\
	/ft_memmove.c\
	/ft_memchr.c\
	/ft_memcmp.c\
	/ft_strlen.c\
	/ft_strdup.c\
	/ft_strndup.c\
	/ft_strcpy.c\
	/ft_strncpy.c\
	/ft_strcat.c\
	/ft_strncat.c\
	/ft_strlcat.c\
	/ft_strchr.c\
	/ft_strrchr.c\
	/ft_strstr.c\
	/ft_strnstr.c\
	/ft_strcmp.c\
	/ft_strncmp.c\
	/ft_atoi.c\
	/ft_isalpha.c\
	/ft_isdigit.c\
	/ft_isalnum.c\
	/ft_isascii.c\
	/ft_isprint.c\
	/ft_toupper.c\
	/ft_tolower.c\
	/ft_memalloc.c\
	/ft_memdel.c\
	/ft_strnew.c\
	/ft_strnewc.c\
	/ft_strdel.c\
	/ft_strclr.c\
	/ft_striter.c\
	/ft_striteri.c\
	/ft_strmap.c\
	/ft_strmapi.c\
	/ft_strequ.c\
	/ft_strnequ.c\
	/ft_strsub.c\
	/ft_strjoin.c\
	/ft_strjoinf.c\
	/ft_strtrim.c\
	/ft_strsplit.c\
	/ft_itoa.c\
	/ft_putchar.c\
	/ft_putstr.c\
	/ft_putendl.c\
	/ft_putnbr.c\
	/ft_putchar_fd.c\
	/ft_putstr_fd.c\
	/ft_putendl_fd.c\
	/ft_putnbr_fd.c\

PRNTSRC = /ft_printf.c \
			/parse.c \
			/utils.c \
			/buffer_management.c \
			/print_wchar.c \
			/print_wstr.c \
			/print_unsigned.c \
			/print_int.c \
			/print_char.c \
			/print_float.c

SRCS = $(addprefix $(LIB_PATH), $(SRC))
OBJS = $(addprefix $(OBJ_PATH), $(SRC:.c=.o))
SRCP = $(addprefix $(SRC_PATH), $(PRNTSRC))
OBJP = $(addprefix $(OBJ_PATH), $(PRNTSRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJS) $(OBJP)
	ar rc $(NAME) $(OBJS) $(OBJP)
	ranlib $(NAME)

$(OBJ_PATH)/%.o: $(LIB_PATH)/%.c
	mkdir -p $(OBJ_PATH)
	gcc -Wall -Werror -Wextra -o $@ -c $<

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	gcc -Wall -Werror -Wextra -o $@ -c $<

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -rf $(NAME)

re: fclean all
