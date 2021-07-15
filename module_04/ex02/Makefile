SRCS			= main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS			= $(SRCS:.cpp=.o)

CC				= clang++
RM				= rm -f
CFLAGS			=  -Wall -Wextra -Werror -std=c++98

NAME			= exec

all:			$(NAME)

$(NAME):		$(OBJS)
				clang++ ${CFLAGS} -o ${NAME} ${OBJS}
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)
re:				fclean $(NAME)
.PHONY:			all clean fclean re