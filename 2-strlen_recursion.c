#include "main.h"
/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _Strlen_recursion(s + 1);
	}

	return (longit);
}
