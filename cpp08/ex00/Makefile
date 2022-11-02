NAME = easyfind

SRCS = main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS) $(SRCS) easyfind.hpp
	c++ $(FLAGS) $(SRCS) -o $(NAME)

%.o:%.cpp
	c++ $(FLAGS)  -c $< -o $@

clean :
	rm -rf $(OBJS)
fclean :
	rm -rf $(OBJS) $(NAME)
re : fclean all