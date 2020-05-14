#include "monty.h"



int execute(char *line[], int isPush, int row, stack_t **top)
{
	printf("%s %i  line: %i\n", line[0], isPush, row);

	if (strcmp(line[0], "push") == 0)
	{
		add_dnodeint(top, 1);
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
	int i, isPush, row = 0;
	size_t buffer_size = 80;
	char *command, *parameter, *line[1024], *buffer;
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

		isPush = 1;
		command = strtok(buffer, " \n");
		for (i = 0; i < 3 && command != NULL; i++)
		{
			line[i] = command;
			command = strtok(NULL, " \n");
			if (strcmp(line[0], "push") == 0)
				continue;
			isPush = 0;
			break;
		}
		execute(line, isPush, ++row, &top);
	}
	free(buffer);
	fflush(stdout);
	fclose(fd);
	return (0);
}
