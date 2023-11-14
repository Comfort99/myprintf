#include "main.h"
/**
 * print_X - Prints an unsigned integer in uppercase hexadecimal.
 * @list: Variable argument list containing the unsigned integer.
 * @length_modifier: converts length
 * @hash_flag: checks whether '#' is a flag
 * Return: count or -1
 */
void print_X(va_list list, char length_modifier, int hash_flag)
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
	handle_hash_flag(num, hash_flag);
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar("0123456789ABCDEF"[array[i]]);
	}
	free(array);
	return (counter);
}
