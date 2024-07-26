#include "main.h"
#include <stdlib.h>

/**
* b_specifier - converts an unsigned int to binary and prints it.
* @args: argument list
*
* Return: the number of characters printed.
*/
	int b_specifier(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *binary_str;
	int printed_chars = 0;
	int i, len = 0;
	unsigned int temp = num;
	int leading_zero;

    if (num == 0)
	{
		printed_chars += _putchar('0');
		return (printed_chars);
	}

	while (temp > 0)
	{
		len++;
		temp /= 2;
	}

	binary_str = malloc(len + 1);
	if (binary_str == NULL)
		return (-1);

	binary_str[len] = '\0';

	for (i = len - 1; i >= 0; i--)
	{
		binary_str[i] = (num % 2) + '0';
		num /= 2;
	}

	leading_zero = 1;
	for (i = 0; i < len; i++)
	{
		if (binary_str[i] != '0')
			leading_zero = 0;
		if (!leading_zero)
			printed_chars += _putchar(binary_str[i]);
	}

	free(binary_str);

	return (printed_chars);
}
