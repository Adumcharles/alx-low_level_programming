#include "main.h"

/**
 * _islower - Checks if any character is in lowercase
 * @d: character to be checked
 *
 * Return: 1 if in lowercase, else return 0
 */
int _islower(int d)
{
	if (d >= 'a' && d <= 'z')
		return (1);
	else
		return (0);
}
