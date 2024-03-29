#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Returns the sum of two numbers
 * @a:the first number
 * @b:the second number
 *
 * Return: The result to sum a + b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the substraction of two numbers
 * @a:The first number
 * @b:The second number
 *
 * Return: The result to substract a - b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the multiplication of two numbers
 * @a: The first number.
 * @b: The second number.
 * 
 * Return: The result to multiply a * b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result to divide a / b.
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
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result to module a % b.
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
