SRCS		=	Animal.cpp \
				Dog.cpp\
				Cat.cpp\
				main.cpp\
				WrongAnimal.cpp\
				WrongCat.cpp\

INCL		=	Animal.hpp

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra -std=c++98 -g3

RM			=	rm -f

NAME		=	animal

OBJ			=	$(SRCS:.cpp=.o)

all			:	$(NAME) 

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $< 

$(NAME)		:	$(OBJ) $(INCL)
				$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 
		
clean		:	
				$(RM) $(OBJ)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	clean fclean re all
