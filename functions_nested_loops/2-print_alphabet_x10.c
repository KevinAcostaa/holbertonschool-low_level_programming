#include "main.h"
/**
 * print_alphabet_x10(void) - function
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char abc;

	for (i = 0; i < 10; i++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
	}
}
