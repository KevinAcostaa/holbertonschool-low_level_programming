#include "main.h"
#include <stdlib.h>
/**
 * str_concat - fucntion
 * @s3: pointer
 * Return: always
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int long1, long2;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (long1 = 0; s1[long1] != '\0'; long1++)
	{

	}
	for (long2 = 0; s2[long2] != '\0'; long2++)
	{

	}
	s3 = malloc((long1 + long2 +1) * sizeof(char));
	if (s3 == 0)
	{	free(s3);
		return (NULL);
	}

	for (i = 0; i < long1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < long2; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
