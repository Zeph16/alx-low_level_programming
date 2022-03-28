#include <unistd.h>

/**
 * _putchar - prints a single char
 * @c: the single char
 *
 * Return: 1 or -1 depending on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
