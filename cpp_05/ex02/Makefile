NAME = shrubery

SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp

OBJ = ${SRCS.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ) ShrubberyCreationForm.hpp Form.hpp Bureaucrat.hpp RobotomyRequestForm.hpp
	c++ $(FLAGS) $(SRCS) -o $(NAME)

fclean :
	rm -rf $(OBJ) $(NAME)
clean :
	rm -rf $(NAME)
re : fclean all