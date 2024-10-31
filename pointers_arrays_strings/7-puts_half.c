#include "main.h"
/**
 *
 *
 *
 */
void puts_half(char *str)
{
	int leng = 0;
	int inicio;
	int i;

	while(str[leng] != '\0')
	{
		leng++;
	}
	if (leng % 2 == 0)
	{
		inicio = leng / 2;
	}
	else
	{
		inicio = (leng / 2) + 1;
	}
	for (i = inicio; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
