# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccliffor <ccliffor@student.wethinkcode.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/16 16:38:47 by ccliffor          #+#    #+#              #
#    Updated: 2020/05/13 13:09:49 by ccliffor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-- PROGRAM --#
NAME		= libft.a
SRCFILES	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
				ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c \
				ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
				ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
				ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
				ft_isprint.c ft_toupper.c ft_tolower.c \
				\
				ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
				ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
				ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c \
				ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c \
				ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
				ft_putnbr_fd.c \
				\
				ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c\
				ft_lstmap.c \
				\
				ft_is_whitespace.c ft_realloc.c ft_strre.c ft_lstprint.c \
				get_next_line.c hex_to_dec.c \
				\
				vec_append.c vec_del_last.c vec_del_n.c vec_del_one.c \
				vec_dup_last.c vec_dup_n.c vec_dup_one.c vec_extend.c \
				vec_fill.c vec_free.c vec_get.c vec_init.c vec_pop_last.c \
				vec_pop_n.c vec_pop_one.c vec_reserve.c \
				\
				ft_mem_resize.c ft_strchr_index.c
SRCDIR		= src
SRCS		= $(SRCFILES:%=$(SRCDIR)/%)
OBJS		= $(SRCS:%.c=%.o)

#-- Compiler, libs, flags
INCLUDES	= -I includes
WFLAGS		= -Wall -Wextra -Werror
CC			= gcc
CFLAGS		= $(WFLAGS) $(INCLUDES)

#-- Colours --#
COLOR_CLEAR		= \033[0m
COLOR_CYAN		= \033[01;36m
COLOR_GREEN		= \033[00;32m


.PHONY: clean fclean re

#-- RULES --#
all: $(NAME)

#-- Core program
$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "$(COLOR_CYAN)$(NAME) \t\t-- $(COLOR_GREEN)LIBRARY COMPILED$(COLOR_CLEAR)\n"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(COLOR_CYAN)$(NAME) \t\t-- $(COLOR_GREEN)>>$(COLOR_CLEAR) $@"

#-- General rules
clean:
	@rm -f $(OBJS)
	@echo "$(COLOR_CYAN)$(NAME) \t\t-- $(COLOR_GREEN)REMOVED OBJECT FILES$(COLOR_CLEAR)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(COLOR_CYAN)$(NAME) \t\t-- $(COLOR_GREEN)REMOVED LIBRARY$(COLOR_CLEAR)"

re: fclean all
