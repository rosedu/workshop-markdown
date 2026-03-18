CC = gcc
CFLAGS = -Wall -Wextra -O2

all: demo

.PHONY: clean

demo: helloworld/helloworld.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm demo
