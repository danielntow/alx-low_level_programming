#ifndef _3_CALC_H_
#define _3_CALC_H_

/**
 * get_op_func - Selects the correct function to perform the operation.
 * @s: The operator as a string.
 *
 * Return: A pointer to the corresponding function, or NULL if not found.
 */
int (*get_op_func(char *s))(int, int);

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b);

/**
 * op_sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The difference between a and b.
 */
int op_sub(int a, int b);

/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b);

/**
 * op_div - Divides two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the division of a by b.
 */
int op_div(int a, int b);

/**
 * op_mod - Calculates the modulo of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b);

#endif /* _3_CALC_H_ */

