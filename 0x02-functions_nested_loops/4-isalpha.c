#include "main.h"

/**
 * _isalpha - checks if any character is alphabetic
 * @d: is the character to check
 *
 * Return: 1 if the letter is alpabetic, else return 0
 */
int _isalpha(int d)
{
	if ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z'))
		return (1);
	else
		return (0);
}
