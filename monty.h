#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * int main(int argc, char *argv[]) {
 * argc is the count of command-line arguments
 * argv is an array of strings containing the arguments
 */
 

 typedef struct var_s
{
	int queue;
	size_t stack_len;
} var_t;

#define STACK 0
#define QUEUE 1

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


void m_add(stack_t **stack, unsigned int line_number);


void m_fs_close(int status, void *arg);
void free_lineptr(int status, void *arg);
stack_t *add_node(stack_t **stack, const int n);

#endif /* _MONTY_H_ */
