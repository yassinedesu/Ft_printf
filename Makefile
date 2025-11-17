NAME	= libftprintf.a
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
AR	= ar rcs
RM	= rm -f

SRCS	= ft_print_char.c  ft_print_str.c
OBJS	= $(SRCS: .c = .o)

all:	$(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(NAME) was created succefully!"

%.o:	%.c
	@ $(CC) $(CFLAGS) -c $< -o $@
	@echo "$Compilation of $<..."
clean:
	@$(RM) $(OBJS)
	@echo "Object Files Were Deleted Succefully!"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) was deleted succefully!!"

re: fclean all

.PHONY: all clean fclean re
