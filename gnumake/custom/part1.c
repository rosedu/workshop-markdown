#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

int main(void) {
	char *mesg = calloc(101, sizeof(char));
	if (mesg == NULL) {
		goto error;
	}

	printf("Send a \"ping\" to get a pong;\n");
	printf("Or send something else and you get wrong!\n");
	fgets(mesg, 101, stdin);

	char *answer = reply(mesg);
	if (answer == NULL) {
		goto error;
	}

	printf("%s\n", answer);

	free(mesg);
	free(answer);
	return 0;

error:
	printf("calloc() failed; exiting...\n");
	return -1;
}
