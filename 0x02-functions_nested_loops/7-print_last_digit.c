#include "main.h"

/**
 * print_last_digit - prints out the last digit
 *
 * @n: input number as an integer
 *
 * Return: last digit of number8
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
