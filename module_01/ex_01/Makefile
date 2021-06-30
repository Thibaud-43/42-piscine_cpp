SRCS			= Zombie.cpp newZombie.cpp randomChump.cpp main.cpp ZombieHorde.cpp
OBJS			= $(SRCS:.cpp=.o)

CC				= clang++
RM				= rm -f
CFLAGS			=  -Wall -Wextra -Werror -std=c++98

NAME			= zombieland

all:			$(NAME)

$(NAME):		$(OBJS)
				clang++ ${CFLAGS} -o ${NAME} ${OBJS}
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)
re:				fclean $(NAME)
.PHONY:			all clean fclean re