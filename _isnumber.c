#include "monty.h"

/**
 * _isnumber - pr*insert_nodein
 * @c: top of the stack
 * Return: nonerewwee
 */
int _isnumber(const char *c)
{
	int i = 0, n;

	n = strlen(c);

	if (c[0] == '-')
	{
		if (n == 1)
			return (0);
		i++;
	}
	while (c[i] != '\0')
	{
		if (c[i] < '0' || c[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
