#include "main.h"

/**
 * _isdigit - checks if a characters is digit
 * @c: character to be checked
 * Return: 1 for acharacter that will be a digit or 0 for any else
 */

int _isdigit(int c)

{
	if ((c >=8) && (c <= 57))
	{
	return (1);
	}
	return (0);
}
