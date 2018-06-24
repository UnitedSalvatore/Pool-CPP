NAME = ft_retro

SRC_DIR = ./src/
OBJ_DIR = ./obj/

FILENAMES = main.cpp \
			Game.cpp \
			Entity.cpp \
			Ship.cpp \
			Bullet.cpp \
			Enemy.cpp

SRC = $(addprefix $(SRC_DIR), $(FILENAMES))
OBJ = $(addprefix $(OBJ_DIR), $(FILENAMES:.cpp=.o))

CC = clang++
FLAGS ?= -Wall -Werror -Wextra -g
FLAGS += -I./inc/

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) -lncurses

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp | obj
	$(CC) $(FLAGS) -o $@ -c $<

obj:
	mkdir obj/

clean:
	rm -rf obj/

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
