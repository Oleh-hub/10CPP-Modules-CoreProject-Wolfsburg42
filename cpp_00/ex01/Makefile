NAME = phonebook
CC = c++
L_FLAGS = -g
C_FLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS = $(shell find . -not -path './tmp/*' -name '*.cpp')
OBJS = $(SRCS:.cpp=.o)

all: 		$(NAME)

$(NAME): 	$(OBJS)
			$(CC) $(L_FLAGS) $(OBJS) -o $(NAME)

%.o: 		%.cpp *.hpp
			$(CC) $(C_FLAGS) -c $< -o $@

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

prn:
			@echo $(SRCS)
