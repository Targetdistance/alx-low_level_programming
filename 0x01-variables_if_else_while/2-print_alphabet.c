#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l[25] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i <= 25)
	{
		putchar(l[i]);
	}
	putchar('\n')
	return (0)
}
