#include "main.h"

int print_hex(unsigned int num);
int small_hex(unsigned int rem);

/**
 * print_unsignedHex - unsigned int argument is converted to hexadecimal
 *
 * @ap: variadic arguments list
 *
 * Return: number of chararcters printed
*/

int print_unsignedHex(va_list ap)
{
	unsigned int num;
	int count = 0;

	num = va_arg(ap, int);
	/* call print_hex function */
	count = print_hex(num);
	return (count);
}

/**
 * print_hex - unsigned int argument is converted to hexadecimal
 *
 * @num: integer to be converted
 *
 * Return: number of characters printed
 */

int print_hex(unsigned int num)
{
	int count = 0;
	unsigned int rem;

	if ((num / 16) != 0)
	{
		count += print_hex(num / 16); /* recursion takes place */
	}
	rem = (num % 16);
	if (rem > 9)
	{
		count = small_hex(rem); /* call function to print alphabets */
	}
	else
	{
	_putchar(rem + '0'); /* prints integers 0 - 9 */
	}
	return (count);
}

/**
* small_hex - prints alphabets a - f
*
* @rem: integer to be converted
*
* Return: number of characters printed
*/

int small_hex(unsigned int rem)
{
	int count = 0;

	rem = (rem % 10);
	switch (rem)
	{
		case 0:
			_putchar(97); /* 'a' in ASCII */
			break;
		case 1:
			_putchar(98); /* 'b' in ASCII */
			break;
		case 2:
			_putchar(99); /* 'c' in ASCII */
			break;
		case 3:
			_putchar(100); /* 'd' in ASCII */
			break;
		case 4:
			_putchar(101); /* 'e' in ASCII */
			break;
		case 5:
			_putchar(102); /* 'f' in ASCII */
			break;
		default:
			return (-1);
	}
	return (count);
}
