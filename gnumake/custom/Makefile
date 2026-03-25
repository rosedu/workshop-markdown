CC = gcc
CFLAGS = -Wall -Wextra
GDB_FLAGS = -g

# rule that ignores files in the directory that have "all" title
# or "clean" title so that we can run these recipes safely
.PHONY: all clean

# rule that executes all the rules that we give to her
all: greeting parts

ifeq ($(CC), gcc)
	$(info Using GCC compiler...)
else
	$(warning Warning! C program needs to be executed with gcc)
endif

# rule that uses a conditional to make clear that the program will compile
# with gcc and that runs the greeting.c file
greeting: greeting.c
	$(CC) $(CFLAGS) $(GDB_FLAGS) $^ -o $@

# the clean rule removes all the object files made so that we won't
# have binary files that may corrupt our running and also executable files
clean:
	rm -f *.o greeting parts

# we put it here so when we run "make" simple it will take the all rule
include parts_makefile
