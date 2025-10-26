NAME = array

SRCS = main.cpp

OBJS = $(SRCS:%.cpp=%.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf


$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS)  -o $(NAME)

all: $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all