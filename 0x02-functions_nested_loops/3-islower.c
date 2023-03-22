#include "main.h"

/**
 * _islower - Checks for lower character
 * @c: The character to be checkd
 * Return: 1 for lower character or 0 for any other case
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
