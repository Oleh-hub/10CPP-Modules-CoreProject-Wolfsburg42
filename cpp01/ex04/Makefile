NAME	= sedForLosers
CC		= c++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98
CFLAGS += -Wpedantic -fsanitize=address
SRCS 	= $(shell find . -not -path './training/*' -name '*.cpp')
OBJS 	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp *.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

prn:
	@echo $(CFLAGS)

val:
	valgrind --leak-check=full ./$(NAME)