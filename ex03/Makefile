CC = c++
CCFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Fixed

SRCS = main.cpp Fixed.cpp bsp.cpp Point.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)


$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $(NAME)


%.o: %.cpp Fixed.hpp Point.hpp
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re