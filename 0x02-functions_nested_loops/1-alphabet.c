#include "main.h"

/**
 * main - Prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
		letter++
	}
	_putchar('\n');
	return (0);
}
