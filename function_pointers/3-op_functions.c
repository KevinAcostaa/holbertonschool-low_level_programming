#include "3-calc.h"
/**
 * op_add - function sum
 * Return: always
 * @a: a
 * @b: b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function sum
 * Return: always
 * @a: a
 * @b: b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function sum
 * Return: always
 * @a: a
 * @b: b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function sum
 * Return: always
 * @a: a
 * @b: b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function sum
 * Return: always
 * @a: a
 * @b: b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
