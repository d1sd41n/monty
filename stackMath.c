#include "monty.h"

/**
 * add - pr*insert_nodein
 * @top: top of the stack
 * Return: nonerewwee
 */
int add(stack_t **top)
{
	int n;

	if (top == NULL || *top == NULL)
		return (-1);

	if ((*top)->next == NULL)
		return (-1);

	n = (*top)->next->n + (*top)->n;
	delete_dnode(top);
	delete_dnode(top);
	add_dnodeint(top, n);

	return (1);
}
