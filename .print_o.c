#include "main.h"
/**
 * print_o - Prints an unsigned integer in base 8.
 * @list: Variable argument list containing the unsigned integer.
 */
void print_o(va_list list)
{
	unsigned int num;
	int i;
	int *array;
	int counter = 0;
	unsigned int temp;

	num = va_arg(list, unsigned int);
	temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;

	array = malloc(counter * sizeof(int));
	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
