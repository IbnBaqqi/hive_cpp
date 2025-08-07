CPP			:= clang++
CPPFLAGS	:= -Wall -Wextra -Werror -std=c++11
HDRS		:= -I.

OBJ_DIR		:= obj

SRCS		:= HumanA.cpp HumanB.cpp Weapon.cpp
SRC_MAIN	:= main.cpp

OBJS		:= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)
OBJS_MAIN	:= $(SRC_MAIN:%.cpp=$(OBJ_DIR)/%.o)

NAME		:= violence

# Rules
all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp
	$(CPP) $(CPPFLAGS) $(HDRS) -c $< -o $@

$(NAME): $(OBJS) $(OBJS_MAIN)
	$(CPP) $(CPPFLAGS) $(OBJS) $(OBJS_MAIN) $(HDRS) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: all
	@./$(NAME)

.PHONY: all clean fclean re run