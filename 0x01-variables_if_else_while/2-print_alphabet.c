#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	for (int x = "A" ; x <= "Z";)
		x++;
	{
		x = tolower(x);
		putchar(x);
	}
	return (0);
}
