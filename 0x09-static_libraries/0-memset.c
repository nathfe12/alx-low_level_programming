#include "main.h"
/**
 * _memset - fils a block of memory with a specific vlue
 * @s: starting address of memory to be filled
 * @b: The desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *S, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
