#include "main.h"

/**
 * _atoi - converts string into integer
 * @s: string to be converted
 *
 * Return: the integer
 */

int _atoi(char *s)
{
	int i, j, len, plus = 0, minus = 0, multiplier = 1, converted = 0, index = 0, nums = 0;
	int done = 0;
	char strnum[100];

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57 && !done)
		{
			strnum[nums] = s[i];
			nums++;
		}
		else if (s[i] == 43 && !done)
		{
			plus++;
		}
		else if (s[i] == 45 && !done)
		{
			minus++;
		}
		else if (nums > 0)
		{
			done = 1;
		}
	}
	len = nums;
	index = nums;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < index - 1; index--)
		{
			multiplier *= 10;
		}
		converted += (strnum[i] - 48) * multiplier;
		multiplier = 1;
		nums--;
	}
	if (minus > plus)
		converted *= -1;
	
	return (converted);
}

		
