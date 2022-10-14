#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines either greater than 5, is less than 6, or is 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, digit;

	srand(time(0));
	num = rand() - RAND_MAX / 2;
	digit = num % 10;
	if (1 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", num, digit);
	}
	else if (1 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", num, digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6\n", num, digit);
	}
	return (0);
}
