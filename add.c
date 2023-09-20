#include "monty.h"

/**
 * m_add - adding the top two elements of the
 */

int stack[STACK_SIZE];
int top = -1;  // Initialize the top of the stack to -1 to indicate it's empty

// Function to push an element onto the stack
void push(int value) {
    if (top == STACK_SIZE - 1) {
        fprintf(stderr, "Stack overflow!\n");
        exit(EXIT_FAILURE);
    }
    stack[++top] = value;
}

// Function to print all elements on the stack
void pall() {
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    char opcode[100];
    int value, line_number = 0;

    while (scanf("%s", opcode) != EOF) {
        line_number++;

        if (strcmp(opcode, "push") == 0) {
            if (scanf("%d", &value) != 1) {
                fprintf(stderr, "L%d: usage: push integer\n", line_number);
                exit(EXIT_FAILURE);
            }
            push(value);
        } else if (strcmp(opcode, "pall") == 0) {
            pall();
        } else {
            fprintf(stderr, "L%d: Unknown opcode: %s\n", line_number, opcode);
            exit(EXIT_FAILURE);
        }
    }

    return 0;
}
