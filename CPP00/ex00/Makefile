NAME = megaphone
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 megaphone.cpp

SRC =  \
	megaphone.cpp \

OBJ = $(SRC:.c=.o)
.SILENT:

all : ${NAME}

${NAME} : ${OBJ}
	$(CC) $(OBJ) -o $(NAME)

.o: .c
	${CC} -c ${CFLAGS} $< -o $@

clean: 
	rm -f $(OBJ) 
	printf '\033[32m[ ✔ ] %s\n\033[0m' "cleanclean"
	
fclean: clean
	rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re all