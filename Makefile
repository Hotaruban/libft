# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhurpy <jhurpy@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/05 01:19:33 by jhurpy            #+#    #+#              #
#    Updated: 2023/05/10 22:45:03 by jhurpy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = gcc
C_FLAGS = -Wall -Wextra -Werror -g3 # -fsanitize=address,undefined,leak
D_FLAGS = -MMD -MP -MF $(OBJ_DIR)/$*.d

# Commands
RM = rm -rf
AR = ar rc

# Target library name and directories
NAME = libft.a
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = includes

# Sources and objects
SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Default target, build the library
all: $(NAME)

# Object file build rule
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(C_FLAGS) $(D_FLAGS) -I $(INC_DIR) -c $< -o $@

# Target library build rule
$(NAME): $(OBJECTS)
	@$(AR) $(NAME) $(OBJECTS)
	@ranlib $(NAME)

# Rule to build each personal library
$(LIBS_DIR):
	$(MAKE) -C $@

# Clean object files
clean:
	$(RM) $(OBJ_DIR)

# Clean object files and target library
fclean: clean
	$(RM) $(NAME)

# Clean and rebuild the target library
re: fclean all

# Check code style
norm:
	norminette -R CheckForbiddenSourceHeader $(SRC_DIR)/*.c
	norminette -R CheckDefine $(INC_DIR)/*.h

# Phony targets
.PHONY: all clean fclean re norm
