#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("What's your name?\n");
	char *name = calloc(101, sizeof(char));
	if (name == NULL) {
		printf("calloc() failed; exiting...\n");
		return -1;
	}

	fgets(name, 101, stdin);
	printf("Greetings, %s!\n", name);

	free(name);
	return 0;
}
