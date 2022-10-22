NAME = Form_pointer

SRCS = Bureaucrat.cpp main.cpp Form.cpp Intern.cpp PresidentialPardonForm.cpp  RobotomyRequestForm.cpp ShrubberyCreationForm.cpp 

all : $(NAME)

OBJS = ${SRCS:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : $(OBJS) $(SRCS) Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp  RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp
	c++ $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean :
	rm -rf $(OBJS) $(NAME)

re : fclean all