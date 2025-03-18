#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds to integer together
 * @a: first integer
 * @b: second integer
 *
 * Return: result of added integers
*/
int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

/**
 * op_sub - subtracts an integer from another
 * @a: first integer
 * @b: second integer
 *
 * Return: result of subtracted integers
*/
int op_sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}

/**
 * op_mul - multiplies two integers together
 * @a: first integer
 * @b: second integer
 *
 * Return: result of multiplied integers
*/
int op_mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}

/**
 * op_div - divides an integer with another
 * @a: first integer
 * @b: second integer
 *
 * Return: result of divided integers
*/
int op_div(int a, int b)
{
	int result;

	result = a / b;
	return (result);
}

/**
 * op_mod - divides an integer with another
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder when dividing
*/
int op_mod(int a, int b)
{
	int result;

	result = a % b;
	return (result);
}
