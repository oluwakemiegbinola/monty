#include "monty.h"

/**
 * m_add - adding the top two elements of the stack
 */
void m_add(stack_t **stack, unsigned int line_number)
{
	int n = 0;

	if (var.stack_len < 2)
	{
		/*dprintf(STDOUT_FILENO, "L%u: can't add, stack too short\n",line_number);*/
		perror("cant add");
		exit(EXIT_FAILURE);
	}
	n += (*stack)->n;
	m_pop(stack, line_number);
	(*stack)->n += n;
}
