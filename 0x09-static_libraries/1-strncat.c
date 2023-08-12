#include "main.h"
/**
 * _strncat - concatenates two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return dest
 */
char *_strncat(char *dest, char *Src, int )
{
	int i;
	int j;

	i = 0;
	whie (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
