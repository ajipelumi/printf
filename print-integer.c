#include "main.h"

int print_num(unsigned int num);

/**
 * print_integer - prints an integer
 *
 * @ap: variadic arguments list
 *
 * Return: number of chararcters printed
*/

int print_integer(va_list ap)
{
	int n;
	unsigned int num;
	int count = 0;

	n = va_arg(ap, int);
	if (n < 0) /* n is negative */
	{
		num = -n;
		_putchar('-');
		count++;
	}
	else /* n is positive */
	{
		num = n;
	}
	/* call print_num function */
	count += print_num(num);
	return (count);
}

/**
 * print_num - prints an integer
 *
 * @num: integer to be printed
 *
 * Return: number of characters printed
 */

int print_num(unsigned int num)
{
	int count = 0;

	if (num / 10) /* number is greater than 9 */
	{
		count += print_num(num / 10); /* recursion takes place */
	}
	_putchar((num % 10) + '0'); /* prints if number is < 9 */
	return (count + 1);
}
