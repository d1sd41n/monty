#include "monty.h"
 
/** monty - checks arguments and reads monty file
* @argc: number or arguments
* @argv: array with arguments
* 
* Return: 0 on success
*/
 
int main(int argc, char *argv[])
{
	FILE *fd;
	/**char *command[256];*/
	int line_number = 0;
	size_t buffer_size = 80;
	char *buffer = malloc(buffer_size * sizeof(char));
	char *command, *parameter;

	check_mfile(argc);
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
    	while(-1 != getline(&buffer, &buffer_size, fd))
    	{
		command = strtok(buffer, " ");
		//if (command == 'add')
		parameter = strtok(buffer, " ");
		printf("%s %s\n", command, parameter);
	}
    	fflush(stdout);
	fclose(fd);
	return (0);
}