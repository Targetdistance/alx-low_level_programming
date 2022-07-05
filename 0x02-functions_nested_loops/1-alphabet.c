#include "main.h"
/**
 * print_alphabet - prints out the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int alp;

	for (alp = 97; alp <= 122; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
