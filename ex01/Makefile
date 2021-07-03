CC		= clang++

DIR		= ./srcs

H_DIR	= ./includes

NAME	= phonebook

HFILES	= Phonebook.h

FLAGS	= -Wall -Wextra -Werror

SRCS	= main.cpp \
		  phonebook.cpp \

OBJ_DIR	= ./objects

OBJWDIR	= $(addprefix $(OBJ_DIR), $(OBJS))

vpath %.cpp	$(DIR)
vpath %.h	$(H_DIR)
vpath %.o	$(OBJ_DIR)

OBJS		= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

$(OBJ_DIR)/%.o:	$(DIR)/%.cpp $(HFILES) | $(OBJ_DIR)
			$(CC) $(CFLAGS) -I$(H_DIR) -c $< -o $@

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
