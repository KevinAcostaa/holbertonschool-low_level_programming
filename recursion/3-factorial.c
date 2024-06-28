#include "main.h"
/**
 * factorial - fucntion that returns the factorial of a given number
 * @n: variable number
 * Return: Always
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	} 
	else
	{
		return (n * factorial(n - 1));
	}
}
