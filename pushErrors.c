#include "monty.h"

/**
 * push_error_1 - main function of shell.
 * @row: counter arguments.
 * Return:
 */
void push_error_1(int row)
{
	fprintf(stderr, "L%d: usage: push integer\n", row);
	exit(EXIT_FAILURE);
}

/**
 * no_command_error - main function of shell.
 * @row: counter arguments.
 * Return:
 */
void no_command_error(int row)
{
	fprintf(stderr, "L%d: unknown\n", row);
	exit(EXIT_FAILURE);
}

/**
 * malloc_error - main function of shell.
 * Return:
 */
void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
