#include "monty.h"

/**
 * print_dlistint - prints linkeds list
 * @top: top of the stack
 * Return: none
 */
size_t print_dlistint(const stack_t *top)
{
	size_t i = 0;

	while (top != NULL)
	{
		printf("%i\n", top->n);
		top = top->next;
		i++;
	}
	return (i);
}


/**
 * add_dnodeint - struct
 * @top: top of the stack
 * @n: pointer to n
 * Return: top
 */
stack_t *add_dnodeint(stack_t **top, const int n)
{
	stack_t *node;

	if (top == NULL)
		return (NULL);

	node = malloc(sizeof(stack_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*top == NULL)
		node->next = NULL;
	else
	{
		node->next = *top;
		(*top)->prev = node;
	}
	node->prev = NULL;
	*top = node;
	return (*top);

}


/**
 * delete_dnode - pr*insert_nodein
 * @top: top of the stack
 * Return: nonerewwee
 */
int delete_dnode(stack_t **top)
{
	stack_t *temp = *top;

	if (top == NULL || *top == NULL)
		return (-1);

	if ((*top)->next != NULL)
		(*top)->next->prev = NULL;
	*top = (*top)->next;
	free(temp);
	return (1);
}

/**
 * get_top_n - pr*insert_nodein
 * @top: top of the stack
 * Return: the number of the top
 */
void get_top_n(const stack_t *top)
{
	if (top)
		printf("%d\n", top->n);
	fprintf(stderr, "L<linenumber>: can't pint, stack empty\n");
	exit(EXIT_FAILURE);
}
