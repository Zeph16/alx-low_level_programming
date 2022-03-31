#include "main.h"

/**
 * _pow_recursion - returns x raised to y via recursion
 * @x: x
 * @y: y
 *
 * Return: x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y != 0)
		return (_pow_recursion(x, --y) * x);
	else
		return (1);
}
