# compiler
CC = c++

# program name
NAME = account

# compiler flags
CFLAGS  = -g -Wall -Wextra -Werror -std=c++98

SRC =	tests.cpp \
		Account.cpp

# includes
INC =	Account.hpp

# obj
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(NAME)

fclean: clean
	rm -f $(OBJ)

re: fclean all