.PHONY: clean

# Compiler flags
CC=gcc
CFLAGS=-Wall -Wextra -std=c99

# Checks if executables exist
GREETING_EXISTS := $(or $(and $(wildcard greeting),1),)
TWOPARTER_EXISTS := $(or $(and $(wildcard twoparter),1),)

# Builds two executables, greeting and twoparter
all: greeting twoparter

# Builds greeting with default compilation settings
greeting: greeting.c

# Builds executable from multiple .c files and a .h header
twoparter: part1.c part2.c header.h
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

# Removes executables if they exist
clean:
ifdef GREETING_EXISTS
	rm greeting
endif
ifdef TWOPARTER_EXISTS
	rm twoparter
endif
