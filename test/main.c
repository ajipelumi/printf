#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i, len, len2;

	len = _printf("%x\n", UINT_MAX);
	len2 = printf("%x\n", UINT_MAX);
	fflush(stdout);
	i = len2 - len;
	printf("%d\n", len);
	printf("%d\n", len2);
	printf("%d\n", i);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}


