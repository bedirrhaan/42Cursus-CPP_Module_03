NAME = FragTrap

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

RM = rm -f

all : $(NAME)

$(NAME) : $(OBJ)
						$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
						$(RM) $(OBJ)

fclean : clean
						$(RM) $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re