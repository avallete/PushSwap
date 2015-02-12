INC_PATH=./includes/
INC_NAME=libft.h\
		ft_printf.h\
		get_next_line.h\
		ft_pushswap.h

OBJ_PATH=./obj/
OBJ_NAME=$(SRC_NAME:.c=.o)
CFLAGS=-Wall -Wextra -Werror
CC=gcc
LIBFT:=-L libft -lftprintf
SRC_PATH:=./src/
SRC_NAME:=check_arg.c\
ft_stack.c\
misc.c\
push_swap.c\
resolve.c\
switch.c\
rotate.c

SRC=$(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ=$(addprefix $(OBJ_PATH), $(OBJ_NAME))
INCF=$(addprefix $(INC_PATH), $(INC_NAME))
INC=$(addprefix -I, $(INC_PATH))

NAME=push_swap
RED=\033[0;31m
LBLUE=\033[1;34m
CYAN=\033[0;36m
ORANGE=\033[0;33m
NC=\033[0m

all: $(NAME)

$(NAME):$(OBJ)
	@make -s -C libft
	@echo "${CYAN}Compile $(NAME) with $(CFLAGS)${NC}";
	@$(CC) $(CLFAGS) $(OBJ) $(INC) $(LIBFT) -o $(NAME)

$(OBJ_PATH)%.o:$(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	@echo "${ORANGE}Create bynary $@ with $<${NC}";
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	@echo "${RED}Delete OBJ files${NC}"
	@rm -rf $(OBJ_PATH)

fclean: clean
	@echo "${RED}Delete $(NAME) file${NC}"
	@rm -rf $(NAME)

re: fclean all clean

.PHONY: all clean fclean re
