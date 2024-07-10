#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - check the code
 * @b: entero
 * Return: Always
 */
void *malloc_checked(unsigned int b)
{
	char *k;

	k = malloc(b);

	if (k == NULL)
	{
		exit(98);
	}

	return (k);





}
