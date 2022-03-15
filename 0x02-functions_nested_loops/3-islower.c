#include "main.h"
/**
 * _islower - checks if a char is lowercase
 * @c: char to be tested
 *
 * Return: 1(Success)
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	return (0);
}
