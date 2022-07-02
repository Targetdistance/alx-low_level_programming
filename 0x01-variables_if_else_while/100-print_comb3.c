#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int x = 48;

	while (x < 58)
	{
		i = 48;
		while (i < 58)
		{
			putchar(x);
			putchar(i);
			if (i == 57 && x == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			i++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
