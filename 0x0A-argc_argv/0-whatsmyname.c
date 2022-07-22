#include <stdio.h>

/**
 * main -  a program that prints its name
 * @argc: number of command arguments
 * @argv: an array holding the command arguments
 * Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
