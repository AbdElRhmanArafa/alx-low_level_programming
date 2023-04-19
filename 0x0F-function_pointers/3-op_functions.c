#include "3-calc.h"
/**
 * op_add - add two number
 * @a: number
 * @b: number
 *
 * Return: sum of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub two number
 * @a: number
 * @b: nymber
 *
 * Return: sub(a - b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul two number
 * @a: number
 * @b: number
 *
 * Return: mul (a * b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div two number
 * @a: number
 * @b: number
 *
 * Return: div(a / b)
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
 * op_mod - reminder of two number
 * @a: number
 * @b: number
 *
 * Return: mod a % b
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
