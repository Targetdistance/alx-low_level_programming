#include <stdio.h>

/**
 * main - prints out the alphabet in reversed order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i = 0;

	while (i < 26)
	{
		putchar(l[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
