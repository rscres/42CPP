# compiler
CC = c++

# program name
NAME = phonebook

# compiler flags
CFLAGS  = -g -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		PhoneBook.cpp \
		Contact.cpp

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