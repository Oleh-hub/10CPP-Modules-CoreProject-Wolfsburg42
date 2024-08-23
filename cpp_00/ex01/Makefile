NAME	= phonebook
CC		= c++
L_FLAGS = -g

# C_FLAGS = -Wall -Wextra -Werror -std=c++98 -g

CFLAGS		= -Werror -Wall -Wextra  -std=c++98 -fsanitize=address
#  is used to enforce strict compliance with the C++ standard.
C_FLAGS += -Wpedantic 
# suppress warnings about unused variables, functions, parameters, and other entities.
# C_FLAGS += -Wno-unused

SRCS = $(shell find . -not -path './training/*' -name '*.cpp')
OBJS = $(SRCS:.cpp=.o)

all: 		$(NAME)

$(NAME): 	$(OBJS)
			$(CC) $(L_FLAGS) $(OBJS) -o $(NAME)

%.o: 		%.cpp *.hpp
			$(CC) $(C_FLAGS) -c $< -o $@

clean:
			rm -f $(OBJS) *.o

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

prn:
			@echo $(SRCS)
