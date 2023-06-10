#include <stdlib.h>
#include <stdio.h>

/**
 * mian - a program that multiples two arguments passed intop  it
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments pased
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = (atoi(argv[2]));
		printf("%d\n", m);
	}
	return (0);
}
