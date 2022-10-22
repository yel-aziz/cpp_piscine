NAME = shrubery

SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp  RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJS = ${SRCS:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS) $(SRCS) ShrubberyCreationForm.hpp Form.hpp Bureaucrat.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp
	c++ $(FLAGS) $(SRCS) -o $(NAME)

fclean :
	rm -rf $(OBJS) $(NAME)
clean :
	rm -rf $(OBJS)
re : fclean all