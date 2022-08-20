NAME = FIXED

SRSC = Fixed.cpp main.cpp

OBJ = ${SRSC.cpp=.opp}

FLAGS  = -Wall -Wextra -Werror -Wno-deprecated-copy

all : $(NAME)

$(NAME) : $(NAME) $(SRCS) Fixed.hpp 
	c++ $(FLAGS)  $(SRSC) -o $(NAME)

fclean : 
	rm -rf $(OBJ) $(NAME)
clean :
	rm -rf $(OBJ)

re : fclean all