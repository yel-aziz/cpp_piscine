NAME = FragTrap

SRCS = ClapTrap.cpp FragTrap.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}

FLAGS  = -Wall -Wextra -Werror -std=c++98

all  : $(NAME)

$(NAME) : $(SRCS) $(OBJS) ClapTrap.hpp FragTrap.hpp
	c++ $(FLAGS) $(SRCS) -o $(NAME)

fclean : 
	rm -rf $(OBJS) $(NAME)
clean : 
	rm -rf $(OBJS)
re : fclean all