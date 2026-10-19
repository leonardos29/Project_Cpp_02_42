NAME    = fixed
CC      = c++
FLAGS   = -Wall -Wextra -Werror -std=c++98

SRC     = main.cpp Fixed.cpp
OBJ     = $(SRC:.cpp=.o)
DEP     = $(SRC:.cpp=.d)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -MMD -MP -c $< -o $@

-include $(DEP)

clean:
	rm -f $(OBJ) $(DEP)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re