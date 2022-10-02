NAME = harl

SRCS = main.cpp Harl.cpp

FLAGS = -Wall -Wextra  -Werror

OBJ = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(SRCS) $(OBJ) Harl.hpp
	c++ $(FLAGS) $(SRCS) -o $(NAME)

fclean :
	rm -rf $(OBJ) $(NAME)

clean :
	rm -rf $(OBJ)

re : fclean all