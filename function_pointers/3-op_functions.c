#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - sums a and b
 * @a: first int
 * @b: second int
 * Return: return the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract b from a
 * @a: first int
 * @b: second int
 * Return: result of substracting
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply a and b
 * @a: first int
 * @b: second int
 * Return: result of product
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide a by b
 * @a: first int
 * @b: second int
 * Return: the divison result
 */

int op_div(int a, int b)
{
	if (b == 0)
		printf("Error\n");
	exit(100);
	return (a / b);
}
/**
 * op_mod - a modulus b (remainder of integer division)
 * @a: first int
 * @b: second int
 * Return: the result of %
 */
int op_mod(int a, int b)
{
	if (b == 0)
		printf("Error\n");
	exit(100);
	return (a % b);
}
