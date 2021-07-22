#include "3-calc.h"
/**
 * op_add - addition.
 *
 * @op: number
 * @f: number
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -  subtraction.
 *
 * @op: number
 * @f: number
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 *
 * @op:number
 * @f:number
 */
int op_mul(int a, int b)
{
   return (a * b);
}

/**
 * op_div - division
 *
 * @op: number
 * @f: number
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
 * op_mod - modulo
 *
 * @a: number
 * @b: number
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
