CPP			:= clang++
CPPFLAGS	:= -Wall -Wextra -Werror -std=c++11

OBJ_DIR		:= obj

SRCS		:= Contact.cpp PhoneBook.cpp main.cpp

OBJS		:= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

NAME		:= phonebook

# Rules
all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: all
	@./$(NAME)

.PHONY: all clean fclean re run