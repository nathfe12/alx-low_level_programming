#include "main.h"
/**
 * _isupper - uppercse letters
 * @c: char to check
 *
 * Return: 0 or 1
 */
ont _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
