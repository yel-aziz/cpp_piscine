NAME = fixed_point

SRCS = Fixed.cpp main.cpp 

OBJS = ${SRCS.cpp:.o}

all : $(NAME)

FLAGS = -Wall -Wextra -Werror

$(NAME) : $(OBJS) $(SRCS) Fixed.hpp
	c++ $(FLAGS) $(SRCS) -o $(NAME)

fclean :
	rm -rf $(OBJS) $(NAME)
clean :
	rm -rf $(OBJS)

re : fclean all