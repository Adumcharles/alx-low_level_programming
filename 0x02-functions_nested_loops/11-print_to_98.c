#include "main.h"

/**
 * print_to_98 - Prints all natural numbers
 * @n: The begining of the count
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 99)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
