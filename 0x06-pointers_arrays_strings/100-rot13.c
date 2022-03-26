#include "main.h"

/**
 * rot13 - caesar cipher with key 13
 * @s: string to be encrypted
 * Return: char pointer to encrypted string
 */
char *rot13(char *s)
{
	int i;
	int j;
	char alpha[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char encryptBase[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j]; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = encryptBase[j];
				break;
			}
		}
	}
	return (s);
}


