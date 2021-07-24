CC		=	clang++

DIR		=	./srcs

H_DIR	=	./includes

NAME	=	ptr_vs_ref

HFILES	=	Zombie.hpp \

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp \

OBJ_DIR	=	./objects

OBJWDIR	=	$(addprefix $(OBJ_DIR), $(OBJS))

vpath %.cpp	$(DIR)
vpath %.hpp	$(H_DIR)
vpath %.o	$(OBJ_DIR)

OBJS		= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

$(OBJ_DIR)/%.o:	$(DIR)/%.cpp $(HFILES) | $(OBJ_DIR)
			$(CC) $(CPPFLAGS) -I$(H_DIR) -c $< -o $@

$(NAME):	$(OBJS) | $(OBJ_DIR)
			$(CC) $^ -I$(H_DIR) -o $@

$(OBJ_DIR):
			mkdir -p $@

all:		$(NAME) | $(OBJ_DIR)

clean:
			rm -rf $(OBJ_DIR)

fclean:		clean
			rm -f $(NAME)

re:			fclean
			make $(NAME)

.PHONY:		all clean fclean re
