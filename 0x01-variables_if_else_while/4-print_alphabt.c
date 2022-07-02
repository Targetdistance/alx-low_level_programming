#include <stdio.h>

/**
 * main - prints out alphabets in lowercase except for q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		if (i != 4 && i != 14)
		{
			putchar(l[i]);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
