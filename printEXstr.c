#include "main.h"
/**
  * printEXstr - This prints exclusive string.
  * @val: Argument
  * Return: This returns integer.
  */
int printEXstr(va_list val)
{
	char *str;
	int iter, len = 0;
	int value;

	str = va_arg(val, char *);
	if (str == NULL)
		str = "(null)";
	for (iter = 0; str[iter] != '\0'; iter++)
	{
		if (str[iter] < 32 || str[iter]>= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = str[iter];
			if(value < 16)
			{
				_putchar('0')
				len++;
			}
			len = len + print_X2(value);
		}
		else
		{
			_putchar(str[iter]);
			len++;
		}
	}
	return (len);
}
