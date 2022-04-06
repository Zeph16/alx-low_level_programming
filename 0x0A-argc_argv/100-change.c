#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: the number of money
 * @argv: the money
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int money;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	money = atoi(argv[1]);
	while (money > 0)
	{
		if (money >= 25)
			money -= 25;
		else if (money >= 10)
			money -= 10;
		else if (money >= 5)
			money -= 5;
		else if (money >= 2)
			money -= 2;
		else if (money == 1)
			money -= 1;
		coins++;
	}
	printf("%i\n", coins);

	return (0);
}
