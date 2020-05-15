#include "monty.h"

/**
 * swap - pr*insert_nodein
 * @top: top of the stack
 * @row: top of the stack
 * Return: nonerewwee
 */
int swap(stack_t **top, int row)
{
	int n;

	if (top == NULL || *top == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", row);
		exit(EXIT_FAILURE);
	}

	if ((*top)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", row);
		exit(EXIT_FAILURE);
	}

	n = (*top)->n;
	(*top)->n = (*top)->next->n;
	(*top)->next->n = n;

	return (1);
}

/**
 * clean_stack - prints linkeds list
 * @top: top of the stack
 * Return: none
 */
void clean_stack(stack_t **top)
{
	stack_t *temp;

	while (*top != NULL)
	{
		temp = *top;
		*top = temp->next;
		delete_dnode_c(&temp);
	}
}
