CC		= clang++
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f

NAME	= main
SRCS	= ./main.cpp \
		  ./Animal.cpp \
		  ./Cat.cpp \
		  ./Dog.cpp \
		  ./WrongAnimal.cpp \
		  ./WrongCat.cpp

OBJS	= $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re 