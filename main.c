#include "monty.h"


/**
 * execute - main function of shell.
 * @line: counter arguments.
 * @top: arguments pointer.
 * Return: final .status.
 */
int execute(char *line[], stack_t **top)
{
	int val;

	if (strcmp(line[0], "push") == 0)
	{
		val = atoi(line[1]);
		add_dnodeint(top, val);
	}
	else if (strcmp(line[0], "pint") == 0)
	{
		print_dlistint(*top);
	}

	return (0);

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
	int i;
	size_t buffer_size = 80;
	char *command, *line[1024], *buffer;
	stack_t *top = NULL;

	check_mfile(argc);
	fd = fopen(argv[1], "r");
	buffer = malloc(buffer_size * sizeof(char));
	if (buffer == NULL)
	{
		free(buffer);
		exit(EXIT_FAILURE);
	}
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (-1 != getline(&buffer, &buffer_size, fd))
	{
		command = strtok(buffer, " \n");
		for (i = 0; i < 3 && command != NULL; i++)
		{
			line[i] = command;
			command = strtok(NULL, " \n");
			if (strcmp(line[0], "push") == 0)
				continue;
			break;
		}
		execute(line, &top);
	}
	clean_stack(&top);
	free(buffer);
	fflush(stdout);
	fclose(fd);
	return (0);
}
