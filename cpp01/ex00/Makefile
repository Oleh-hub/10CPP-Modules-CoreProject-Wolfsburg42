# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oruban <oruban@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/26 13:51:53 by oruban            #+#    #+#              #
#    Updated: 2024/08/26 13:51:54 by oruban           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= zombie
CC		= c++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98
CFLAGS += -Wpedantic
SRCS 	= $(shell find . -not -path './training/*' -name '*.cpp')
OBJS 	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp *.hpp
	$(CC) $(C_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

prn:
	@echo $(CFLAGS)
