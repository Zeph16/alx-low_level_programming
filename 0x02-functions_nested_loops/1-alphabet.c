#include "main.h"
/**
 * main - Alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	for(int i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
