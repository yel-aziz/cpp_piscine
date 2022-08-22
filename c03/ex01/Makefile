NAME = ScavTrap

SRCS = ClapTrap.cpp ScavTrap.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}

FLAGS  = -Wall -Wextra -Werror

all  : $(NAME)

$(NAME) : $(SRCS) $(OBJS) ScavTrap.hpp ClapTrap.hpp
	c++ $(FLAGS) $(SRCS) -o $(NAME)

fclean : 
	rm -rf $(OBJS) $(NAME)

clean : 
	rm -rf $(OBJS)

re : fclean all