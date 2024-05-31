# compiler options
CC = c++
CFLAGS  = -g3 -Wall -Wextra -Werror

# program name
NAME = easyfind

# source files
SRC = $(wildcard *.cpp)

# build options
BUILD_DIR = build
OBJ = $(patsubst %.cpp,$(BUILD_DIR)/%.o,$(SRC))

all: obj_dir $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

obj_dir: $(BUILD_DIR)

$(BUILD_DIR):
	@if [ ! -d "$(BUILD_DIR)" ]; then \
		mkdir -p $(BUILD_DIR); \
	fi

$(BUILD_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all