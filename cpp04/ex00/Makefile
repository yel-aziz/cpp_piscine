NAME = polyi

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp

OBJS = ${SRCS:.cpp=.o}

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME):$(SRCS) $(OBJS) Animal.hpp Cat.hpp Dog.hpp
	c++ $(FLAGS) $(SRCS) -o $(NAME)

fclean : 
	rm -rf $(NAME) $(OBJS)
clean :
	rm -rf $(OBJS)
re : fclean all