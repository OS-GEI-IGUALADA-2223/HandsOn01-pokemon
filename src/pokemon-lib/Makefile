CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
LDFLAGS = -fsanitize=undefined -fsanitize=address -fsanitize=leak
EXECUTABLE = pokemon
SOURCES = $(wildcard *.c)
OBJS = $(SOURCES:.c=.o)

all: $(EXECUTABLE) 

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(EXECUTABLE) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c $<

test: $(EXECUTABLE)
	./$(EXECUTABLE)

clean:
	rm -f $(TARGET) $(OBJS) *.txt

.PHONY: all clean
