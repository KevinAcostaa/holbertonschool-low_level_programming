#include "main.h"
#include <stdio.h>
/**
 * main - function
 *
 *
 */
int main()
{
	int i;

	for (i = 0; i <= 99; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FrizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
			printf("\n");
	}
	return (0);
}
