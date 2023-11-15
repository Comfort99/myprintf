#include "main.h"
/**
  * _putchar - writes the character from input to output
  * @c: This is the inputted output
  * Return: This returns 1 on success, else -1, on error.
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
