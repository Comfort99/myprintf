#include "main.h"
/**
   * print_rot13 - convert to rot13
    * @args: printf arguments
     * Return: counter
       */
int print_rot13(va_list args)
{
	int iter, j, count = 0;
	int m = 0;
	char *str = va_arg(args, char*);
	char norm[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char new[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
	str = "(null)";
	for (iter = 0; str[iter]; iter++)
	{
		m = 0;
		for (j = 0; norm[j] && !m; j++)
		{
			if (str[iter] == norm[j])
			{
			_putchar(new[j]);
			count++;
			m = 1;
			}
		}
		if (!m)
		{
			_putchar(str[iter]);
			count++;
		}
	}
	return (count);
}
