#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: input.
 * Return: Output.
 */

void *malloc_checked(unsigned int b)
{
	void *n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
