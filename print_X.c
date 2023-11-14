#include "main.h"

/**
   * print_X - prints an hexgecimal number.
    * @list: arguments.
     * Return: counter.
      */
int print_X(va_list list)
{
		int iter;
		int *arr;
		int counter = 0;
		unsigned int numb = va_arg(list, unsigned int);
		unsigned int temp = numb;

		while (numb / 16 != 0)
		{
			numb /= 16;
			counter++;
		}
		counter++;
		arr = malloc(counter * sizeof(int));

			for (iter = 0; iter < counter; iter++)
			{
				arr[iter] = temp % 16;
				temp /= 16;
			}
			for (iter = counter - 1; iter >= 0; iter--)
			{
				if (arr[iter] > 9)
					arr[iter] = arr[iter] + 7;
				_putchar(arr[iter] + '0');
			}
			free(arr);
	return (counter);
}

