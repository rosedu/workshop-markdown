#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	printf("What's your name?\n");
	char *name = calloc(101, sizeof(char));
	if (name == NULL) {
		printf("calloc() failed; exiting...\n");
		return -1;
	}

	fgets(name, 101, stdin);
	name[strcspn(name, "\n")] = '\0';
	printf("Greetings, %s!\n", name);

	free(name);
	return 0;
}
