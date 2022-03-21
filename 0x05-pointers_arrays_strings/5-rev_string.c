#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(str + i) != '\0'; i++)
		len++;

	char temp[len];

	for (i = 0; i <= len; i++)
		temp[i] = *(str + (len - i));

	for (i = 0; i <= len; i++)
		*(str + i) = temp[i];
}
