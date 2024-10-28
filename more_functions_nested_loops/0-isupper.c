#include "main.h"
/**
 * _isupper - function
 * @c: parametro
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
