NAME = zombie

SRCS = main.cpp newZombie.cpp randomChump.cpp zombie.cpp

FLAGS = -Wall -Wextra -werror

OBJS = $(SRCS:.c=.o);

all : $(NAME)

$(NAME) : $(SRCS) $(OBJS)
	c++ $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -rf $(OBJS)
fclean :
	rm -rf $(OBJS) $(NAME)
re : fclean all