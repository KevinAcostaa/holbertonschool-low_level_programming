#include "main.h"
/**
 * _strlen_recursion - function that returns lenght
 *
 * @s: variable char
 *
 * Return: returns the lenght of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
