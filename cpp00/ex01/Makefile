NAME = phonebook

SRCS = phonebook.cpp

FLAGS = -Wall -Wextra -Werror

OBJ = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(SRCS) $(OBJ) phonebook.hpp
	c++ $(FLAGS) $(SRCS) -o $(NAME)

%.o : %.c
	c++ $(OBJ) -c $< -o $@

fclean : 
	rm -rf $(OBJ) $(NAME)

clean :
	rm -rf $(OBJ)

re : fclean all