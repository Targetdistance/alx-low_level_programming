#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (success)
 */
int main(int)
{
	char text[] "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(2, text, 59);
	return (1);
}
