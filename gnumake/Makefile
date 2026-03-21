# Extra tip:
# Comments in Makefiles start with '#' and stretch
# to the end of the line!

# Start writing below this line...

CC = gcc
CFlAGS = -Wall -Wextra -Icustom/

.PHONY: clean

all: example greeting parts

# builds the example file
example: example.c
	$(CC) $(CFLAGS) -o $@ $^

# blablabla
greeting: custom/greeting.c
	$(CC) $(CFLAGS) -o $@ $^

parts: custom/part2.c custom/part1.c
	$(CC) $(CFLAGS) $^ -o parts

clean:
	rm example greeting parts
