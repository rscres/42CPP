# compiler
CC = c++

# program name
NAME = fragTrap

# compiler flags
CFLAGS  = -g -Wall -Wextra -Werror -std=c++98

# source files
SRC =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp

# build directory
BUILD_DIR = build

# obj files
OBJ = $(addprefix $(BUILD_DIR)/,$(SRC:.cpp=.o))

all: $(NAME)

$(NAME): obj_dir $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

obj_dir:
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all