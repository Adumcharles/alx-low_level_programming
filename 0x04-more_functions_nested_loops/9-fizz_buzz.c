#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100, i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3)
			printf("Fizz");
		else if (1 % 5)
			printf("Buzz");
		else
			printf("%i", i);
		if (1 < 100)
			printf(" ");
	}
	printf('\n');
	return (0);
}
