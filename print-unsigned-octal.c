#include "main.h"

int print_octal_integer(unsigned int num);

/**
 * print_unsignedOct - prints octal integer
 *
 * @ap: variadic arguments list
 *
 * Return: number of chararcters printed
*/

int print_unsignedOct(va_list ap)
{
	unsigned int num;
	int count = 0;

	num = va_arg(ap, int);
	/* call print_octal_integer function */
	count += print_octal_integer(num);
	return (count);
}

/**
 * print_octal_integer - prints octal integer
 *
 * @num: integer to be converted
 *
 * Return: number of characters printed
 */

int print_octal_integer(unsigned int num)
{
	int count = 0;

	if (num / 8)
	{
		count += print_octal_integer(num / 8); /* recursion takes place */
	}
	_putchar((num % 8) + '0'); /* prints octal integer */
	return (count + 1);
}
