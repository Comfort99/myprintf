#include "main.h"
/**
 * get_unsigned_length - returns the appropriate unsigned int
 * based on length modifier.
 * @list: arguments.
 * @length_modifier: length modifier.
 * Return: unsigned int.
 */
unsigned int get_unsigned_length(va_list list, char length_modifier)
{
	if (length_modifier == 'l')
	{
		return ((unsigned int)va_arg(list1, unsigned long int));
	}
	else if (length_modifier == 'h')
	{
		return ((unsigned int)va_arg(list, unsigned int));
	}
	else
	{
		return (va_arg(list, unsigned int));
	}
}
