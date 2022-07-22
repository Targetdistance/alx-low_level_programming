#include <stdio.h>

/**
 * main - prints out the number of arguments passed
 * @argc: contains the number of arguments
 * @argv: an array of the arguments passed to the program
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (1);
}
