# Compiler and flags
CC := gcc
CFLAGS := -Wall -Wextra -g

# Conditional block (debug vs release)
ifeq ($(DEBUG),1)
CFLAGS += -DDEBUG
else
CFLAGS += -O2
endif

# Targets
TARGETS := greeting parts

# Function to get executable name
make_exec = $(basename $(notdir $(1)))

# Default rule
all: $(TARGETS)

# Include extra rules
include extra.mk

# Build greeting executable from greeting.c
greeting: greeting.c
	@echo "Compiling greeting.c..."
	$(CC) $(CFLAGS) -o $(call make_exec,$<) $<

# Build parts executable using part1.c, part2.c and header.h
parts: part1.c part2.c header.h
	@echo "Compiling parts (part1 + part2)..."
	$(CC) $(CFLAGS) -o parts part1.c part2.c

# Clean rule
clean:
	@echo "Cleaning executables..."
	rm -f greeting parts

# Phony rules
.PHONY: all clean help