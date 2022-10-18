#include "main.h"

/**
 * print_sign - Print the sign of the number
 * @d: the character which the sign will be printed
 *
 * Return: 1 if the number is greater than zero
 *  0 if the number is equal to zero
 * -1 if the number is less than zero.
 */
int print_sign(int d)
{
	if (d > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (d == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
