#include "main.h"
/**
 * _print_rev_recurison - prints a string in reverse
 * @s: The string to be printed
 */
void _print_rev_recurison(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}