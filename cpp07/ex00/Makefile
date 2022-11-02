NAME = first_temp

SRCS = main.cpp

OBJS = ${SRCS.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS) $(SRCS) functions.hpp
	c++ $(FLAGS) $(SRCS) -o $(NAME)

%.o : %.cpp
	c++ $(FLAGS) -c $< -o $@

clean : 
	rm -rf $(OBJS)
fclean :
	rm -rf $(OBJS) $(NAME)
re : fclean all