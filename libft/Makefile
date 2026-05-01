# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sliang <sliang@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2026/03/17 12:50:46 by sliang        #+#    #+#                  #
#    Updated: 2026/04/04 17:14:29 by sliang        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#colours
GREEN = \033[1;92m
RED = \033[31m
WHITE = \033[1;60m
RESET = \033[0m

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isalpha.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_strnstr.c \
 		ft_strlcpy.c \
 		ft_strlcat.c \
 		ft_strchr.c \
 		ft_strrchr.c \
 		ft_strncmp.c \
 		ft_memset.c \
 		ft_memcpy.c \
 		ft_memmove.c \
 		ft_memchr.c \
 		ft_memcmp.c \
		ft_strdup.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_split.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c
		
OBJS_DIR = objs
OBJS = $(SRCS:%.c=$(OBJS_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^
	@echo "$(GREEN)libft objects files are archived.$(RESET)"

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(WHITE)compiling file $< ->$(RESET) $(GREEN)$@ $(RESET)" 

clean:
	@rm -rf $(OBJS_DIR)
	@echo "$(RED)Object files is removed.$(RESET)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)Library and objects files are removed.$(RESET)"

re: fclean all

.PHONY: all clean fclean re