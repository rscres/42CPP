# compiler
CC = c++

# program name
NAME = fixed

# compiler flags
CFLAGS  = -g -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		Fixed.cpp \
		Point.cpp \
		bsp.cpp
 
# obj
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(NAME)

fclean: clean
	rm -f $(OBJ)

re: fclean all