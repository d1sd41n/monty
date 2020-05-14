#include "monty.h"

/**
 * _isnumber - pr*insert_nodein
 * @c: top of the stack
 * Return: nonerewwee
 */
int _isnumber(const char *c)
{
	while (*c)
	{
		if (*c < '0' || *c > '9')
			return (0);
		c++;
	}
	return (1);
}
