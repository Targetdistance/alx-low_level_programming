#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

	i = 0;
	while (i < 52)
	{
		putchar(l[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
