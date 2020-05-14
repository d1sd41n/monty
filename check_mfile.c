#include "monty.h"
 
/**
 * check_mfile - checks the number of commands and the validity of the monty file
 * @argc: number of arguments
 * @argv: arguments array
 * 
 * Return: nothing 
*/

void check_mfile(int ac)
{
	// int file_desc;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
