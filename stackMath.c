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


/**
 * mul - pr*insert_nodein
 * @top: top of the stack
 * @row: top of the stack
 * Return: nonerewwee
 */
int mul(stack_t **top, int row)
{
	int n;

	if (top == NULL || *top == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", row);
		exit(EXIT_FAILURE);
	}

	if ((*top)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", row);
		exit(EXIT_FAILURE);
	}

	n = (*top)->next->n * (*top)->n;
	delete_dnode_c(top);
	delete_dnode_c(top);
	add_dnodeint(top, n);

	return (1);
}


/**
 * sub - pr*insert_nodein
 * @top: top of the stack
 * @row: top of the stack
 * Return: nonerewwee
 */
int sub(stack_t **top, int row)
{
	int n;

	if (top == NULL || *top == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", row);
		exit(EXIT_FAILURE);
	}

	if ((*top)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", row);
		exit(EXIT_FAILURE);
	}

	n = (*top)->next->n - (*top)->n;
	delete_dnode_c(top);
	delete_dnode_c(top);
	add_dnodeint(top, n);

	return (1);
}

/**
 * dividir - pr*insert_nodein
 * @top: top of the stack
 * @row: top of the stack
 * Return: nonerewwee
 */
int dividir(stack_t **top, int row)
{
	int n, divisor;

	if (top == NULL || *top == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", row);
		exit(EXIT_FAILURE);
	}

	if ((*top)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", row);
		exit(EXIT_FAILURE);
	}
	divisor = (*top)->n;
	if (divisor == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", row);
		exit(EXIT_FAILURE);
	}
	n = (*top)->next->n / (*top)->n;
	delete_dnode_c(top);
	delete_dnode_c(top);
	add_dnodeint(top, n);

	return (1);
}


/**
 * modulo - pr*insert_nodein
 * @top: top of the stack
 * @row: top of the stack
 * Return: nonerewwee
 */
int modulo(stack_t **top, int row)
{
	int n, divisor;

	if (top == NULL || *top == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", row);
		exit(EXIT_FAILURE);
	}

	if ((*top)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", row);
		exit(EXIT_FAILURE);
	}
	divisor = (*top)->n;
	if (divisor == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", row);
		exit(EXIT_FAILURE);
	}
	n = (*top)->next->n % (*top)->n;
	delete_dnode_c(top);
	delete_dnode_c(top);
	add_dnodeint(top, n);

	return (1);
}
