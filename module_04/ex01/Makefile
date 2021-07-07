SRCS			= main.cpp AWeapon.cpp PlasmaRifle.cpp PowerFist.cpp Enemy.cpp SuperMutant.cpp RadScorpion.cpp Character.cpp
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