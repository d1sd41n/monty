#include "monty.h"

/**
 * add - pr*insert_nodein
 * @top: top of the stack
 * @row: top of the stack
 * Return: nonerewwee
 */
int add(stack_t **top, int row)
{
	int n;

	if (top == NULL || *top == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", row);
		exit(EXIT_FAILURE);
	}

	if ((*top)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", row);
		exit(EXIT_FAILURE);
	}

	n = (*top)->next->n + (*top)->n;
	delete_dnode_c(top);
	delete_dnode_c(top);
	add_dnodeint(top, n);

	return (1);
}
