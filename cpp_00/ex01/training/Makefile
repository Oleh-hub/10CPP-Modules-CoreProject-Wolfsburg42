NAME = Const
CC = c++
L_FLAGS = -g
C_FLAGS = -Wall -Wextra -Werror -std=c++98 -g
C_FLAGS += -Wno-unused
# SRCS = $(shell find -name '*.cpp')
# SRCS = $(shell find . -not -path './Stoliarov/*' -name '*.cpp')
SRCS = $(NAME).cpp \
		main.cpp
 
OBJS = $(SRCS:.cpp=.o)

all: 		$(NAME)

$(NAME): 	$(OBJS)
			$(CC) $(L_FLAGS) $(OBJS) -o $(NAME)

%.o: 		%.cpp $(NAME).hpp
			$(CC) $(C_FLAGS) -c $< -o $@

clean:
			rm -f $(OBJS) *.o

fclean: 	clean
			rm -f $(NAME) a.out *.

re: 		fclean all

prn:
			@echo $(SRCS)
			@echo $(OBJS)
			@echo $(C_FLAGS)