#include "monty.h"

/**
 * push_error_1 - main function of shell.
 * @row: counter arguments.
 * Return: final .status.
 */
void push_error_1(int row)
{
	fprintf(stderr, "L%d: usage: push integer\n", row);
	exit(EXIT_FAILURE);
}
