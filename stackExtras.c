#include "monty.h"

/**
 * swap - pr*insert_nodein
 * @top: top of the stack
 * Return: nonerewwee
 */
int swap(stack_t **top)
{
	int n;

	if (top == NULL || *top == NULL)
		return (-1);

	if ((*top)->next == NULL)
		return (-1);

	n = (*top)->n;
	(*top)->n = (*top)->next->n;
	(*top)->next->n = n;

	return (1);
}
