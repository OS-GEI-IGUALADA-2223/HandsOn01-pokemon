CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
LDFLAGS = -fsanitize=undefined -fsanitize=address -fsanitize=leak
EXECUTABLE = main
SOURCES = main.c pokemon-lib/pokemon.c
OBJS = $(SOURCES:.c=.o)

all: $(EXECUTABLE) 

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(EXECUTABLE) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c $<

execute: $(EXECUTABLE)
	./$(EXECUTABLE)

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean
