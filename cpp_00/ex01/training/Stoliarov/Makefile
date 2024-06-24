NAME = class_complex_nbr
SRC = $(NAME).cpp
all: *.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -g $(SRC) -o $(NAME)
# clean:
# 	rm -f *.o
# fclean: clean
fclean: 
	rm -f a.out a $(NAME)
re: fclean all
prn:
	@echo $(NAME)
	@echo $(SRC)