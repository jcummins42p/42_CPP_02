# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcummins <jcummins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 18:08:59 by jcummins          #+#    #+#              #
#    Updated: 2024/09/09 17:57:09 by jcummins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = orth_canonical_form

SRC_DIR = .
OBJ_DIR = obj
DEP_DIR = dep
INC_DIR = .
CC = c++
CFLAGS = -g -Werror -Wextra -Wall -pedantic -std=c++98 -MMD -MP

SRCS = $(shell find $(SRC_DIR) -name '*.cpp')
INCS = $(shell find $(INC_DIR) -name '*.hpp')
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEPS = $(SRCS:$(SRC_DIR)/%.cpp=$(DEP_DIR)/%.d)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@
	@echo "✅ Linking object files into executable $@"

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	@mkdir -p $(DEP_DIR)
	@$(CC) $(CFLAGS) -MF $(DEP_DIR)/$*.d -c $< -o $@
	@echo "✅ Complied object file $@ from source file $<"

#	include dependancy files
-include $(DEPS)

clean:
	@echo "💥 Removing all object and dependency files"
	@rm -rf $(OBJ_DIR)
	@rm -rf $(DEP_DIR)

fclean: clean
	@echo "💥 Removing all object files and executable"
	@rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re
