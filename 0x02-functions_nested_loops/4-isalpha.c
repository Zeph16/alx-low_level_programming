#include "main.h"
/**
 * _isalpha - checks if a char is a char
 * @c: char to be tested
 *
 * Return: 1(Success)
 */
int _isalpha(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else if (c < 91 && c > 64)
	{
		return (1);
	}
	return (0);
}
