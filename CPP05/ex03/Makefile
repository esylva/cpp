NAME = formforu

SRC 		= main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
			Intern.cpp

OBJ = $(SRC:.cpp=.o)

CC = clang++
CFLAGC = -std=c++98 -Wall -Wextra -Werror -I.

RM = rm -f

%.o: %.cpp *.hpp
	$(CC) $(CFLAGC) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
