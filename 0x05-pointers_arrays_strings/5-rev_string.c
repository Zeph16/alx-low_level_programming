#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i;
	int len = 0;
	char temp[1000];

	for (i = 0; *(s + i) != '\0'; i++)
		len++;

	for (i = 0; i <= len; i++)
		temp[i] = *(s + (len - i));

	for (i = 0; i <= len; i++)
		*(s + i) = temp[i];
}
