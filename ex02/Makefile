CPP = c++
CPPFLAGS = -g -std=c++98 -Wall -Wextra -Werror

NAME = mstack

all: $(NAME)

$(NAME):
	$(CPP) $(CPPFLAGS) main.cpp -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re
