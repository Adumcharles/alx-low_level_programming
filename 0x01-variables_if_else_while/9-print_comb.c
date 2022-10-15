#include <stdio.h>

/**
 * main - Prints the numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
