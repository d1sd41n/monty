#include "monty.h"
 
/** monty - checks arguments and reads monty file
* @argc: number or arguments
* @argv: array with arguments
* 
* Return: 0 on success
*/
 
int main(int argc, char *argv[])
{
	check_mfile(argc);
	printf("%s\n", argv[1]);
	/*read_mfile(argv[1]);*/
	return (0);
}
