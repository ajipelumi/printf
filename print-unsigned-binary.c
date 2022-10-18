#include "main.h"

int print_binary(unsigned int num);

/**
 * print_unsignedBin - unsigned int argument is converted to binary
 *
 * @ap: variadic arguments list
 *
 * Return: number of chararcters printed
*/

int print_unsignedBin(va_list ap)
{
	unsigned int num;
	int count = 0;

	num = va_arg(ap, int);
	/* call print_binary function */
	count += print_binary(num);
	return (count);
}

/**
 * print_binary - unsigned int argument is converted to binary
 *
 * @num: integer to be converted
 *
 * Return: number of characters printed
 */

int print_binary(unsigned int num)
{
	int count = 0;

	if ((num / 2) != 0)
	{
		count += print_binary(num / 2); /* recursion takes place */
	}
	_putchar((num % 2) + '0'); /* prints in binary */
	return (count + 1);
}
