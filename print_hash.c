#include "main.h"
/**
 * handle_hash_flag - Handles the '#' flag for hexadecimal output.
 * @num: The integer value to be printed.
 * @hash_flag: The flag indicating whether '#' flag
 */
void handle_hash_flag(int num, int hash_flag)
{
	if (hash_flag && num != 0)
	{
		_putchar('0');
		_putchar('X');
	}
}
