NAME = DiamondTrap

SRCS = ClapTrap.cpp FragTrap.cpp main.cpp DiamondTrap.cpp ScavTrap.cpp

OBJS = ${SRCS:.cpp=.o}

FLAGS  = -Wall -Wextra -Werror -std=c++98

all  : $(NAME)

$(NAME) : $(SRCS) $(OBJS) ClapTrap.hpp FragTrap.hpp DiamondTrap.hpp ScavTrap.hpp
	c++ $(FLAGS) $(SRCS) -o $(NAME)

fclean : 
	rm -rf $(OBJS) $(NAME)
clean : 
	rm -rf $(OBJS)
re : fclean all