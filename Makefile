NAME	= libftprintf.a
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
AR	= ar rcs
RM	= rm -f

#Colors
CYAN	= \033[0;36m
RED	= \033[0;31m
GREEN	= \033[0;32m
RESET	= \033[0m


SRCS	= ft_print_char.c  ft_print_str.c ft_print_hex.c ft_print_p.c ft_print_digit.c ft_print_unsigned_int.c ft_printf.c
OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)$(NAME) was created succefully!$(RESET)"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(CYAN)Compilation of $<...$(RESET)"
clean:
	@$(RM) $(OBJS)
	@echo "$(RED)Object Files Were Deleted Succefully!$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)$(NAME) was deleted succefully!!$(RESET)"

re: fclean all

.PHONY: all clean fclean re
