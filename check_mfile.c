#include "monty.h"
/**
 * check_mfile - checks the validity of the monty file
 * @ac: number of arguments
 * Return: nothing
*/
void check_mfile(int ac)
{
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
