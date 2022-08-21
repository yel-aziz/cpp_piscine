NAME = ClapTrap

SRCS = ClapTrap.cpp

OBJS = ${SRCS:.cpp=.o}

FLAGS  = -Wall -Wextra -Werror

all  : $(NAME)

$(NAME) : $(SRCS) $(OBJS)
	c++ $(FLAGS) $(SRCS) -o $(NAME)

fclean : 
	rm -rf $(OBJS) $(NAME)
clean : 
	rm -rf $(OBJS)
re : fclean all