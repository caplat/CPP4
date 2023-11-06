NAME = amateria

SRCS = main.cpp \
AMateria.cpp \
Cure.cpp \
Ice.cpp \
Character.cpp \
MateriaSource.cpp \

CXX = c++

MY_OBJECTS = $(SRCS:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

.c.o:
	$(CXX) $(CXXFLAGS) $< -o $(<:.cpp=.o)

$(NAME): $(MY_OBJECTS)
	$(CXX) $(CXXFLAGS) $(MY_OBJECTS) -o $(NAME)

debug: $(MY_OBJECTS)
	$(CXX) $(CXXFLAGS) $(MY_OBJECTS) -o $(NAME)

RM=rm -f

clean:
	$(RM) $(MY_OBJECTS)

fclean: clean
	${RM} ${NAME}

re:	fclean all