#include "main.h"
/**
 * print_x - Prints an unsigned integer in lowercase hexadecimal.
 * @list: Variable argument list containing the unsigned integer.
 * @length_modifier: converts the length
 * Return: count or -1
 */
void print_x(va_list list, char length_modifier)
{
	unsigned int num;
	int i;
	int *array;
	int counter = 0;
	unsigned int temp;

	num = get_unsigned_length(list, length modifier);
	temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
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
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar("0123456789abcdef"[array[i]]);
	}
	free(array);
	return (counter);
}
