#include "main.h"
/**
 * more_numbers - function
 *
 *
 */
void more_numbers(void)
{
	int i;
	int num;

	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar('1');
			}
			
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
