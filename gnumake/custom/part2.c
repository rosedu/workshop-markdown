#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

char* reply(char *initial) {
	char *result = NULL;

	if (strcmp(initial, "ping") == 0) {
		result = calloc(5, sizeof(char));
		if (result == NULL) {
			goto error;
		}

		strcpy(result, "pong");
	} else {
		result = calloc(11, sizeof(char));
		if (result == NULL) {
			goto error;
		}

		strcpy(result, "Try again!");
	}

	return result;

error:
	printf("calloc() failed; exiting...");
	return NULL;
}
