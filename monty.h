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
 

void m_add(stack_t **stack, unsigned int line_number);
void free_lineptr(int status, void *arg)

#endif /* _MONTY_H_ */
