# External Makefile (included)
# Contains rule for building "part"

# Rule for compiling part1.c and part2.c into "part"
part: part1.c part2.c
	@echo "==== Compiling part1.c and part2.c ===="
	$(CC) $(CFLAGS) part1.c part2.c -o part

# Declare phony (optional here, but explicit)
.PHONY: part
