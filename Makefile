NAME = get_next_line.a

CFLAGS = -Wall -Wextra -Werror

SOURCES = \
	get_next_line.c \
#get_next_line_utils.c \
	
OBJECTS = $(SOURCES:%.c=%.o)

all: $(NAME)

%.o: %.c
	cc $(CFLAGS) -c -D BUFFER_SIZE=100 $(SOURCES) -o $(OBJECTS)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $? 
	
clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
