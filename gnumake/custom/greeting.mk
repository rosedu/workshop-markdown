CC = gcc
CFLAGS = -Wall

greeting: greeting.c
	$(CC) $(CFLAGS) -o $@ $^