# Extra tip:
# Comments in Makefiles start with '#' and stretch
# to the end of the line!

# Start writing below this line...
CC= gcc
CFLAGS= -Wall -Wextra -O3 -g
TARGET= example.c

all: build

build: example.c
	$(CC) $(CFLAGS) -o example $(TARGET)

.PHONY: clean

clean:
	rm example