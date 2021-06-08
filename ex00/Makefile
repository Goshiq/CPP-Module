CC		= clang++

DIR		= ./srcs/

H_DIR	= ./includes/

NAME	= megaphone

HFILES	= megaphone.hpp

FLAGS	= -Wall -Wextra -Werror

SRCS	= megaphone.cpp

OBJ_DIR	= ./objects/

OBJWDIR	= $(addprefix $(OBJ_DIR), $(OBJS))

vpath %.cpp	$(DIR)
vpath %.hpp	$(H_DIR)
vpath %.o	$(OBJ_DIR)

OBJS		= $(SRCS:.cpp=.o)

#%.o:		%.cpp $(HFILES) | $(OBJ_DIR)
#			$(CC) $(FLAGS) -c $< -I$(H_DIR) -o $(OBJ_DIR)$@

$(NAME):	$(OBJS) | $(OBJ_DIR)
			mv $< $(OBJ_DIR)
			$(CC) $(OBJWDIR) -I$(H_DIR) -o $@

all:		$(NAME) | $(OBJ_DIR)

$(OBJ_DIR):
			mkdir -p $@

clean:
			rm -rf $(OBJ_DIR)

fclean:		clean
			rm -f $(NAME)

re:			fclean
			make $(NAME)

.PHONY:		all clean fclean re
