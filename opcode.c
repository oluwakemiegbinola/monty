#include "monty.h"
#include <string.h>
/**
 *Function to push an element onto the stack
 *Function to pop an element from the stack
 *monty.c - Monty Bytecode Interpreter
 * main - Entry point for the Monty bytecode interpreter 
 * reads and interprets Monty bytecode from stdin,
 * and executes the specified operations.
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure.
 */
#define STACK_SIZE 100

int main(void)
{
	Stack stack;

	initStack(&stack);
	char line[100];
	int line_number = 0, value;
	char *token;

	while (fgets(line, sizeof(line), stdin))
	{
		line_number++;
		token = strtok(line, " \t\n");

		if (token)
		{
			if (strcmp(token, "push") == 0)
			{
				token = strtok(NULL, " \t\n");
				if (!token)
				{
					fprintf(stderr, "L%d: usage: push integer\n", line_number);
					exit(EXIT_FAILURE);
				}
				value = atoi(token);
				push(&stack, value);
			}
			else if (strcmp(token, "pall") == 0)
				pall(&stack);
			else
			{
				fprintf(stderr, "L%d: Unknown opcode: %s\n", line_number, token);
				exit(EXIT_FAILURE);
			}
		}
	}

	return (EXIT_SUCCESS);
}
