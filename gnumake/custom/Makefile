include greeting.mk

CC = gcc
CFLAGS = -Wall

NAME := $(shell whoami)
ifeq ($(NAME), administrator)
MSG = "Helo, administrator!"
else
MSG = "You are not administrator!"
endif

.PHONY: clean all

all: greeting parts
# @echo $(INFO_MSG)

parts: part1.c part2.c header.h
$(CC) $(CFLAGS)-o $@ $^

clean:
rm -f greeting parts