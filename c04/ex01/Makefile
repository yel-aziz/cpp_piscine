NAME = World_on_fire

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp 

OBJS = ${SRCS:.cpp=.o}

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME):$(SRCS) $(OBJS) Animal.hpp Cat.hpp Dog.hpp Brain.hpp
	c++ $(FLAGS) $(SRCS) -o $(NAME)

fclean : 
	rm -rf $(NAME) $(OBJS)
clean :
	rm -rf $(OBJS)
re : fclean all