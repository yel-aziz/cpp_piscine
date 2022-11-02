NAME = zombie

SRCS = main.cpp newZombie.cpp randomChump.cpp zombie.cpp

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