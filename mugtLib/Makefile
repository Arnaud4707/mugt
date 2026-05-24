# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmanique <gmanique@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/16 03:08:31 by gmanique          #+#    #+#              #
#    Updated: 2026/02/21 00:08:44 by gmanique         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#######################################################
#					Work in progress...				  #
#######################################################


# Constantes

NAME := MugtGraphicsLib.a
CXX := c++
AR := ar -src
AUTHORS := gmanique and amugisha
CXXFLAGS = -Wall -Wextra -Werror -lm -lX11 -lvulkan $(pkg-config --cflags --libs vulkan x11) -O3
SRC_DIR = srcs
OBJ_DIR = build
INCLUDES := -Iincludes -I/usr/include/vulkan
INC_DIRS := includes
RM = rm -rf
DEP_FLAGS := -MMD -MP
SHELL := bash

BASE_SRC =	init_vulkan.cpp destroy_vulkan.cpp gpu.cpp



VALGRIND = valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes --trace-children=yes
SUPPRESSION = --suppressions=suppressions.supp
VALGRIND += $(SUPPRESSION)


# Couleurs

YELLOW = \033[0;93m
BOLD_YELLOW = \033[1;93m
RED = \033[0;91m
GREEN = \033[0;92m
CLEAR_COLOR = \033[0m
GRAY = \033[0;90m
CYAN = \033[0;96m
BOLD = \033[1;98m

BANNER = "\n$(BOLD_YELLOW)$(NAME) BY $(AUTHORS)$(CLEAR_COLOR)\n$(GRAY)System: $(shell uname -s) | Arch: $(shell uname -m)$(CLEAR_COLOR)\n"

SRC = $(addprefix $(SRC_DIR)/, $(BASE_SRC))

# Objects et dependances
OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEPS = $(OBJ:.o=.d)


# For progress bar

SRC_COUNT := $(words $(shell find $(SRC_DIR) -name "*.cpp"))
INC_COUNT := $(words $(shell find $(INC_DIRS) -name "*.h" -o -name "*.hpp"))

# On fait l'addition via le shell
TOTAL_FILES := $(shell echo $$(($(SRC_COUNT) + $(INC_COUNT))))

# CURR_FILE   = 0
# @$(eval CURR_FILE=$(shell echo $$(($(CURR_FILE)+1))))
# @$(eval PERCENT=$(shell echo $$(($(CURR_FILE)*100/$(SRC_FILES)))))
# BAR_WIDTH   := 40
# FILLER      := █
# EMPTY       := ░

# Fonctions

define compile
	@if $(CXX) $(CPPFLAGS) $(DEP_FLAGS) $(DEBUG_FLAG) $(INCLUDES) -c $(1) -o $(2) >/dev/null 2>&1; then \
		printf "✅ $(GREEN)Success: $(YELLOW)%s$(CLEAR_COLOR)\n" "$(1)"; \
    else \
        printf "❌ $(RED)Failed: $(YELLOW)%s$(CLEAR_COLOR)\n\n" "$(1)"; \
		$(CXX) $(CXXFLAGS) $(DEP_FLAGS) $(DEBUG_FLAG) $(INCLUDES) -c $(1) -o $(2); \
        exit 1; \
    fi
endef

# Compilation 

all : $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(call compile,$<,$@)

stats:
	@printf "$(BOLD)Project Statistics:$(RESET)\n"
	@printf "  $(CYAN)Code files:$(CLEAR_COLOR) %d\n" $(TOTAL_FILES)
	@printf "  $(CYAN)Lines of Code:$(CLEAR_COLOR) "

	@find $(SRC_DIR) $(INC_DIRS) -type f \( -name "*.cpp" -o -name "*.hpp" -o -name "*.h" \) \
	| xargs cat \
	| perl -0777 -pe 's/\/\*.*?\*\///gs; s/\/\/.*//g; s/^\s*$$//mg' \
	| sed '/^[[:space:]]*$$/d' \
	| wc -l;

	@printf "  $(CYAN)Project size:$(CLEAR_COLOR) "
	@du -sh . --exclude ".git" | cut -f1 | awk '{print $1}' | sed 's/$$/b/'

	@echo -e "	$(GRAY)Currently work in progress..$(CLEAR_COLOR)"


# Linkage

$(NAME) : $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@printf $(BANNER)

test: all
	@c++ srcs/main.cpp -lvulkan -lX11 -lglfw -Iincludes -I/usr/include/vulkan MugtGraphicsLib.a -o test

# Debug
debug: CXXFLAGS += -g3 -D DEBUG_MODE
rdebug: CXXFLAGS += -g3 -D DEBUG_MODE
debug: all
rdebug: re

valgrind: CXXFLAGS += -g3
valgrind: $(NAME)
	@$(VALGRIND) ./$(NAME)

leaks: CXXFLAGS += -fsanitize=address -g3
leaks: $(NAME)
	./$(NAME)


# Help

help :
	@printf "\033[4;93m"
	@printf "Here are the possibilities :"
	@printf "\n\033[0m\033[2;98m\tmake"
	@printf "\n\tmake $(NAME)"
	@printf "\n\tmake help"
	@printf "\n\tmake debug"
	@printf "\n\tmake rdebug"
	@printf "\n\tmake valgrind"
	@printf "\n\tmake stats"
	@printf "\n\tmake all"
	@printf "\n\tmake clean"
	@printf "\n\tmake fclean"
	@printf "\n\tmake re"
	@printf "\n\033[0m"


# Norme

clean :
	@printf "$(RED)Deleting objects...\n$(CLEAR_COLOR)"
	@$(RM) $(OBJ_DIR)
	@printf "$(RED)Done !\n$(CLEAR_COLOR)"
	@rm test

fclean : clean
	@printf "$(RED)Deleting executable...\n$(CLEAR_COLOR)"
	@$(RM) $(NAME)
	@printf "$(RED)Done !\n$(CLEAR_COLOR)"

re : fclean all

.PHONY: all clean fclean re help valgrind debug rdebug stats

-include $(DEPS)
