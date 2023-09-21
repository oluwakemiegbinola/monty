#include "monty.h"

/**
 *Function to push an element onto the stack
 *Function to pop an element from the stack
 */

#define STACK_SIZE 100


{
	int main() {
		Stack stack;
		initStack(&stack);

		char line[100];
		int line_number = 0;

		while (fgets(line, sizeof(line), stdin)) {
			line_number++;
			char *token = strtok(line, " \t\n");

			if (token == NULL) {
				continue;  
			}

			if (strcmp(token, "push") == 0) {
				token = strtok(NULL, " \t\n");
				if (token == NULL) {
					printf("L%d: usage: push integer\n", line_number);
					exit(EXIT_FAILURE);
				}
				int value = atoi(token);
				push(&stack, value);
			} else if (strcmp(token, "pall") == 0) {
				pall(&stack);
			} else {
				printf("L%d: Unknown opcode: %s\n", line_number, token);
				exit(EXIT_FAILURE);
			}
		}

		return 0;
	}
