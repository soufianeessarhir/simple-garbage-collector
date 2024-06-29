NAME = gc
SOURCES = ft_lstadd_back.c  ft_lstclear.c   ft_lstiter.c ft_lstmap.c  ft_lstsize.c ft_free.c ft_lstadd_front.c ft_lstdelone.c ft_lstlast.c ft_lstnew.c  ft_malloc.c  main.c\


OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS) 
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)


%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS) 

fclean: clean
	$(RM) $(NAME) 

re: fclean all