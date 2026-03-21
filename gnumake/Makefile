CC = clang
BIN = example part greeting

.PHONY: all
all: example part greeting

# build example
.PHONY: example
example:
	$(CC) example.c -o example

# build the two parts
.PHONY: part
part:
	$(CC) custom/part1.c custom/part2.c -o part

.PHONY: greeting
greeting:
	$(CC) custom/greeting.c -o greeting

# clean binaries
.PHONY: clean
clean:
	rm -f $(BIN)
