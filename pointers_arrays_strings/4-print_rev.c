#include "main.h"
/**
 * print_rev - prints a string in reverse and new line.
 * @s: input string.
 * Return: no return.
 */

void print_rev(char *s)
{
	int inicial, a;

	for (inicial = 0; s[inicial] != '\0'; inicial++)
	{
	}
	for (a = inicial - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
