# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sliang <sliang@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2026/05/04 12:36:48 by sliang        #+#    #+#                  #
#    Updated: 2026/05/20 09:46:51 by shiyuan       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#colours
GREEN = \033[1;92m
RED = \033[31m
BLUW = \033[0;34m
WHITE = \033[1;60m
RESET = \033[0m

#files structure
NAME = 	push_swap
SRCS = 	make_list.c \
		compute_disorder.c \
	   	main.c
		
OBJS_DIR = objs
OBJS = $(SRCS:%.c=$(OBJS_DIR)/%.o)
LIBFT_DIR = libft
LIBFT_LIB = libft.a
LIBFT_LINK = -L$(LIBFT_DIR) -lft

CC = cc
CFLAGS = -Wall -Wextra -Werror
GDBFLAG = -g

all: $(LIBFT_LIB) $(NAME)

clean:
	@rm -rf $(OBJS_DIR)
	@echo "$(RED)push_swap object files is removed.$(RESET)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)push_swap rogram and its objects files are removed.$(RESET)"

re: fclean all

$(LIBFT_LIB):
	@make -C $(LIBFT_DIR)
	@echo "$(GREEN)$@ is compiled.$(RESET)"

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT_LINK) -o $(NAME)
	@echo "$(GREEN)push_swap program is compiled and ready to run.$(RESET)"

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(BLUE)compiling push_swap file $< ->$(RESET) $(GREEN)$@ $(RESET)"

.PHONY: all clean fclean re