NAME=ex02
CC=c++
FLAGS=-Wall -Wextra -Werror -std=c++98
RM=rm -f

FILES=main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
HEADERS=ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

OBJ=$(FILES:%.cpp=%.o)

%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: make all clean fclean re
