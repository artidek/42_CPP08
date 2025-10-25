CPP = c++
CPPFLAGS = -g -std=c++98 -Wall -Wextra -Werror

NAME = span

all: $(NAME)

$(NAME):
	$(CPP) $(CPPFLAGS) Span.cpp main.cpp -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re
