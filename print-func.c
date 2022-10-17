#include "main.h"
#include <unistd.h>

/**
 * print_char - prints a character
 *
 * @ap: a list of argument pointing
 * to the character to be printed
 *
 * Return: a character
 */

int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	return (write(1, &c, 1));
}

/**
 * print_string - prints a string
 *
 * @ap: a list of argument pointing
 * to the string to be printed
 *
 * Return: a string
*/

int print_string(va_list ap)
{
	unsigned int i, len = 0;
	char *ptr = va_arg(ap, char *);

	if (ptr)
		for (i = 0; ptr[i] != '\0'; i++)
		{
			len++;
		}
	return (write(1, ptr, len));
}

/**
 * print_percent - prints a percent
 *
 * @ap: a list of argument pointing
 * to the character to be printed
 *
 * Return: a percent
*/

int print_percent(__attribute__((unused))va_list ap)
{
	char c = '%';

	return (write(1, &c, 1));
}


