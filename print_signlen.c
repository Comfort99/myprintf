#include "main.h"
/**
 * get_signed_length - Returns the appropriate signed integer
 * based on length modifier.
 * @list: A va_list representing the arguments.
 * @length_modifier: The length modifier for the integer
 * @return: The signed integer based on the length modifier.
 */
int get_signed_length(va_list list, char length_modifier)
{
	if (length_modifier == 'l')
	{
		return ((int)va_arg(list, long int));
	}
	else if (length_modifier == 'h')
	{
		return ((int)va_arg(list, int));
	}
	else
	{
		return (va_arg(list, int));
	}
}
