#include "main.h"
/**
  * printoct - Prints an octal number
  * @val: argument
  * Return: Returns the count
  */
int printoct(va_list val)
{
	int j, *pit, count = 0;
	unsigned int numb = va_arg(val, unsigned int);
	unsigned int temp = numb;
	
	while (numb / 8 != 0)
	{
		numb /= 8;
		count++;
	}
	count++;
	pit = malloc(sizeof(int) * count);
	for (j = 0; j < count; j++)
	{
		pit[j] = temp % 8;
		temp /= 8;
	}
	for (j = count - 1; j >= 0; j--)
		_putchar(pit[j] + '0');
	free(pit);
	return (count);
}
