# compiler
CC = c++

# program name
NAME = materia

# compiler flags
CFLAGS  = -g -Wall -Wextra -Werror -std=c++98

# source files
SRC =	main.cpp \
		AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp	\
		MateriaSource.cpp

# build directory
BUILD_DIR = build

# obj files
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