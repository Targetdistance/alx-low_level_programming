#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		putchar(l[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
