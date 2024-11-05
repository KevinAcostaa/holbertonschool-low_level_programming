#include "main.h"
#include <stddef.h>
/**
 * _strchr - function
 * @s: char
 * @c: char
 * Return: pointer
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
