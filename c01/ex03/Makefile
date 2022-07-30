NAME = warr

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

FLAGS = -Wall -Wextra  -Werror

OBJ = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(SRCS) $(OBJ)
	c++ $(FLAGS) $(SRCS) -o $(NAME)

fclean :
	rm -rf $(OBJ) $(NAME)

clean :
	rm -rf $(OBJ)

re : fclean all