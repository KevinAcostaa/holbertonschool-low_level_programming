#include "main.h"
/**
 * _isalpha - function
 * @c: character
 * Return: 1 or 0
 */
/**
 * Otra manera de lograr el mismo obtivo
 * return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
 *
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
