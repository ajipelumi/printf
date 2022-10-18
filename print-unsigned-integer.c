#include "main.h"

int print_positive_integer(unsigned int num);

/**
 * print_unsignedInt - prints positive integer
 *
 * @ap: variadic arguments list
 *
 * Return: number of chararcters printed
*/

int print_unsignedInt(va_list ap)
{
	unsigned int num;
	int count = 0;

	num = va_arg(ap, int);
	/* call print_positive_integer function */
	count += print_positive_integer(num);
	return (count);
}

/**
 * print_positive_integer - prints positive integer
 *
 * @num: integer to be printed
 *
 * Return: number of characters printed
 */

int print_positive_integer(unsigned int num)
{
	int count = 0;

	if (num / 10) /* number is greater than 9 */
	{
		count += print_positive_integer(num / 10); /* recursion takes place */
	}
	_putchar((num % 10) + '0'); /* prints if number is < 9 */
	return (count + 1);
}
