#include "main.h"
/**
 * print_x - Prints an unsigned integer in lowercase hexadecimal.
 * @list: Variable argument list containing the unsigned integer.
 */
void print_x(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);
	if (num / 16)
		print_x(num / 16);
	_putchar("0123456789abcdef"[num % 16]);
}
