#include "main.h"

/**
 * _isalpha - checks for char alphabet
 * @c: The char to be checked
 *
 * Return: 1 if the char is letter lower or upper, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'z'))
		return (1);
	else
		return (0);
}
