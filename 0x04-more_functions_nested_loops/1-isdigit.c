#include "main.h"

/**
 * _isdigit - Checks if a character is a digit
 * @c: input number
 * Return: 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c >= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
