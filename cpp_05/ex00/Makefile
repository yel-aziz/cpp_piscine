NAME = Bureaucrat

SRCS = Bureaucrat.cpp main.cpp

all : $(NAME)

OBJS = ${SRCS:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : $(OBJS) $(SRCS) Bureaucrat.hpp
	c++ $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean :
	rm -rf $(OBJS) $(NAME)

re : fclean all