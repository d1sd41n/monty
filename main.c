#include "monty.h"

/**
 * execute - main function of shell.
 * @line: counter arguments.
 * @top: arguments pointer.
 * @i: arguments pointer.
 * @row: arguments pointer.
 * Return: final .status.
 */
void execute(char *line[], stack_t **top, int i, int row)
{
	int val;

	if (strcmp(line[0], "push") == 0)
	{
		if (i < 2 || _isnumber(line[1]) == 0)
			push_error_1(row);
		val = atoi(line[1]);
		add_dnodeint(top, val);
	}
	else if (strcmp(line[0], "pall") == 0)
		print_dlistint(*top);
	else if (strcmp(line[0], "\n") == 0 || strcmp(line[0], "nop") == 0 ||
		strcmp(line[0], "#") == 0)
		return;
	else if (strcmp(line[0], "pint") == 0)
		get_top_n(*top, row);
	else if (strcmp(line[0], "pop") == 0)
		delete_dnode(top, row);
	else if (strcmp(line[0], "swap") == 0)
		swap(top, row);
	else if (strcmp(line[0], "add") == 0)
		add(top, row);
	else if (strcmp(line[0], "mul") == 0)
		mul(top, row);
	else if (strcmp(line[0], "sub") == 0)
		sub(top, row);
	else if (strcmp(line[0], "div") == 0)
		dividir(top, row);
	else if (strcmp(line[0], "mod") == 0)
		modulo(top, row);
	else
		no_command_error(row);
}

/**
 * main - main function of shell.
 * @argc: counter arguments.
 * @argv: arguments pointer.
 * Return: final .status.
 */
int main(int argc, char *argv[])
{
	FILE *fd;
	int i, row = 0;
	size_t buffer_size = 1024;
	char *command, *line[1024], *buffer;
	stack_t *top = NULL;

	check_mfile(argc);
	fd = fopen(argv[1], "r");
	buffer = malloc(buffer_size * sizeof(char));
	if (buffer == NULL)
	{
		free(buffer);
		malloc_error();
	}
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (-1 != getline(&buffer, &buffer_size, fd))
	{
		row++;
		command = strtok(buffer, " \n\t\r");
		for (i = 0; i < 2 && command != NULL; i++)
		{
			line[i] = command;
			command = strtok(NULL, " \n\t\r");
		}
		execute(line, &top, i, row);
	}
	clean_stack(&top);
	free(buffer);
	fflush(stdout);
	fclose(fd);
	return (0);
}
