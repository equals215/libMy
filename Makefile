##
## EPITECH PROJECT, 2017
## libMy Makefile
## File description:
## Epitech's First Year libMy with unit tests
##

#Répertoire des includes
INC_DIR=	$(realpath ./includes)

#Fichiers sources
SRC=		int/my_atoi.c				\
		int/my_isneg.c				\
		int/my_is_prime.c			\
		int/my_itos.c				\
		int/my_sort_int_array.c			\
		int/my_swap_int.c			\
		memory/smalloc.c			\
		parsing/get_next_line.c			\
		parsing/my_str_to_word_array.c		\
		printing/my_printf.c			\
		printing/my_printf_core1.c		\
		printing/my_printf_core2.c		\
		printing/my_putchar.c			\
		printing/my_put_nbr.c			\
		printing/my_putstr.c			\
		strings/my_revstr.c			\
		strings/my_strcapitalize.c		\
		strings/my_strcat.c			\
		strings/my_strcmp.c			\
		strings/my_strcpy.c			\
		strings/my_strdup.c			\
		strings/my_strlen.c			\
		strings/my_strlowcase.c			\
		strings/my_strncat.c			\
		strings/my_strncmp.c			\
		strings/my_strncpy.c			\
		strings/my_strstr.c			\
		strings/my_strtod.c			\
		strings/my_strupcase.c			\
		strings/utils/my_str_isalpha.c		\
		strings/utils/my_str_islower.c		\
		strings/utils/my_str_isnum.c		\
		strings/utils/my_str_isprintable.c	\
		strings/utils/my_str_isupper.c

#Fichiers source des tests
SRC_TEST= 	tests/int.c
		##tests/memory.c				\
		##tests/parsing.c				\
		##tests/printing.c			\
		##tests/strings.c

#Fichiers objets
OBJ=		$(SRC:.c=.o)

#Flags de compilation
CFLAGS=		-W -Wall -Wextra -Werror -pedantic -I$(INC_DIR) -g3

#Nom du binaire
NAME=		libmy.a

#Nom du binaire de tests
TESTS_NAME=	unit_tests_libmy

#Règles
all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)
		rm -f $(wildcard *.o)
		rm -f $(wildcard *.gc*)

fclean:		clean
		rm -f $(NAME)
		rm -f $(TESTS_NAME)

tests_run:	$(SRC) $(SRC_TEST)
		gcc $(SRC) $(SRCS_TEST) -I$(INC_DIR) -o $(TESTS_NAME) --coverage -lcriterion -g3
		./$(TESTS_NAME)

tests_coverage:	fclean tests_run
		lcov --directory . -c -o rapport.info
		genhtml -o ./report -t "code coverage report" rapport.info
		open ./report/index.html &>/dev/null

re:		fclean all
