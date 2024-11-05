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
	if(*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *ptr = haystack;
		char *need = needle;

		while (*need != '\0' && *ptr == *need)
		{
			ptr++;
			need++;
		}
		if (*need == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
