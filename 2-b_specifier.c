#include "main.h"

/**
* b_specifier - converts an unsigned int to binary and prints it.
* @args: argument list
*
* Return: the number of characters printed.
*/
int b_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[32]; /* Enough to hold 32-bit binary representation */
	int printed_chars = 0;
	int i = 0;
	int leading_zero = 1;

	if (num == 0)
	{
		printed_chars += _putchar('0');
		return (printed_chars);
	}

	while (num > 0)
	{
		buffer[i++] = (num % 2) + '0';
		num /= 2;
	}

	while (i > 0)
	{
		if (buffer[i - 1] != '0')
			leading_zero = 0;
		if (!leading_zero)
			printed_chars += _putchar(buffer[--i]);
		else
			i--;
	}

	return (printed_chars);
}

