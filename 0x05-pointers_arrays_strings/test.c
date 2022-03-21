#include <stdio.h>

int main()
{
	char str[] = " --+a- 12 c 3 ";
	int i, j, len, signs, plus = 0, minus = 0, multiplier = 1, converted = 0, index = 0, nums = 0;
	int done = 0;
	char strnum[100];

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 48 && str[i] <= 57 && !done)
		{
			printf("%c\n", str[i]);
			strnum[nums] = str[i];
			nums++;
		}
		else if (str[i] == 43 && !done)
		{
			plus++;
		}
		else if (str[i] == 45 && !done)
		{
			minus++;
		}
		else if (nums > 0)
		{
			done = 1;
		}
	}
	printf("\n%s\n%d\n\n", strnum, nums);
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
		printf("%d %d\n", strnum[i], converted);
	}
	if (minus > plus)
		converted *= -1;

	printf("\n%d\n", converted);
	
	return (0);
}

		
