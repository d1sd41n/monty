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

	check_mfile(argc);
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	size_t buffer_size = 80;
	char *buffer = malloc(buffer_size * sizeof(char));
    	while(-1 != getline(&buffer, &buffer_size, fd))
    	{
        	printf("%d: %s", ++line_number, buffer);
    	}
    	fflush(stdout);

	printf("%s\n", argv[1]);
	fclose(fd);
	return (0);
}