NAME = cpp1

SRCS = main.cpp Dummy.cpp Warlock.cpp ATarget.cpp ASpell.cpp Fwoosh.cpp

INCLUDES = Warlock.hpp Dummy.hpp ATarget.hpp ASpell.hpp Fwoosh.hpp

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp $(INCLUDES)
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

.PHONY: all clean fclean
