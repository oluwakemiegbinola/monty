#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * Define a stack structure
 * Function prototypes
 * Define the STACK_SIZE constant
 */


#define STACK_SIZE 100

typedef struct Stack {
	int data[STACK_SIZE];
	int top;
} Stack;

void initStack(Stack *stack);
int isEmpty(Stack *stack);
void push(Stack *stack, int value);
int pop(Stack *stack);
void pall(Stack *stack);

#endif
