#include "main.h"

/**
 * _atoi - converts string into integer
 * @s: string to be converted
 *
 * Return: the integer
 */

int _atoi(char *s)
{
	int i, j, len, index, multiplier = 1, converted = 0,  nums = 0;
	int plus = 0, minus = 0;
	int done = 0, start = 1000, end = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57 && !done)
			nums++;
		else if (s[i] == 43 && !done)
			plus++;
		else if (s[i] == 45 && !done)
			minus++;
		if (done && !(s[i] >= 48 && s[i] <= 57) && end == 0)
			end = i;
		if (nums > 0)
		{
			if (start == 1000)
				start = i;
			done = 1;
		}
	}
	if (end == 0 && nums == 0)
		end = i;
	if (start == 1000)
		start = 0;
	len = end - start;
	index = len - 1;
	for (i = start; i < end; i++)
	{
		for (j = i - start; j < index; index--)
		{
			multiplier *= 10;
		}
		converted += (s[i] - 48) * multiplier;
		multiplier = 1;
		index = len - 1;
	}
	if (minus % 2 != 0)
		converted *= -1;
	return (converted);
}
