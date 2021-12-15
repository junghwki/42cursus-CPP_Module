CC		= clang++ -std=c++98
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f

NAME	= main
SRCS	= ./main.cpp \
		  ./ClapTrap.cpp

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