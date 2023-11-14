#include "main.h"
/**
  * printoct - Prints an octal number
  * @val: argument
  * @length_modifier: converts length
  * Return: Returns the count
  */
int printoct(va_list val, char lenghth_modifier)
{
	int j, *pit, count = 0;
	unsigned int numb = get_unsigned_length(list, length modifier);
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
