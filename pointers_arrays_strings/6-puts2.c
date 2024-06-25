#include "main.h"
/**
 * puts2 - print even numbers
 *
 * @str: numbers pares
 *
 * Return: no return
 *
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 != 0)
			continue;
		else
			_putchar(str[a]);
	}
	_putchar('\n');
}
