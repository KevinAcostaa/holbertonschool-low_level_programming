#include "main.h"
#include <stddef.h>
/**
 * _strstr - function
 * @haystack: cadena
 * @needle: cadena
 * Return: located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*needle != '\0')
	{
		char *ptr = haystack;

		while (*ptr != '\0')
		{
			if (*needle == *ptr)
			{
				return (needle);
			}
			ptr++;
		}
		needle++;
	}
	return (NULL);
}
