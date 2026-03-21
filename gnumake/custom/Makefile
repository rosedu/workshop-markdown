# Compiler and flags (variables)
CC := gcc
CFLAGS := -Wall -Wextra -std=c11

# Output binaries
TARGETS := part greeting

# Default rule
# Builds all targets
all: $(TARGETS)
	@echo "All targets built successfully."

# Include external rules from another Makefile
include build_rules.mk

# Function definition
# A simple function to print a formatted message
define print_message
	@echo "==== $(1) ===="
endef

# Conditional block
# If DEBUG=1 is passed, add debug flags
ifeq ($(DEBUG),1)
	CFLAGS += -g -DDEBUG
	$(call print_message,Debug mode enabled)
else
	$(call print_message,Release mode)
endif

# Rule for greeting.c
# Compiles greeting.c into the greeting binary
greeting: greeting.c
	$(call print_message,Compiling greeting.c)
	$(CC) $(CFLAGS) greeting.c -o greeting

# Clean rule
# Removes generated binaries
clean:
	$(call print_message,Cleaning build artifacts)
	rm -f $(TARGETS)

# Phony rules declaration
.PHONY: all clean greeting
