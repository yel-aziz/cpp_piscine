NAME = Abstract_CLass

SRCS = Animal_Abstract.cpp Brain.cpp Cat.cpp Dog.cpp main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME)  : $(SRCS) $(OBJS) Animal_Abstract.hpp Brain.hpp Cat.hpp Dog.hpp
	c++ $(FLAGS) $(SRCS) -o $(NAME)

fclean : 
	rm -rf $(OBJS) $(NAME)
clean :
	rm -rf $(OBJS)
	
re : fclean all