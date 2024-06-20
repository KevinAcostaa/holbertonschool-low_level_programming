#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: input string.
 *
 * Return: return 16
 */

int _strlen(char *s)
{
	int lent;

	for (lent = 0; s[lent] != '\0'; lent++)
	{}
	return (lent);
}
