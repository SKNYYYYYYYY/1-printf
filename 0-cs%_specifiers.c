#include "main.h"

/**
  *c_specifier - function to print a character
  * @args: input argument from the function.
  *
*/

void c_specifier(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);
}

/**
  * s_specifier - function to print a character
  * @args: input argument from the function.
  *
*/

int s_specifier(va_list args)
{
	char *str = va_arg(args, char *);
	int printed_chars = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		printed_chars++;
		str++;
	}

	return printed_chars;
}

/**
  * modulo_specifier - function to print a modulo
  * @args: input argument from the function.
  *
*/

void modulo_specifier(va_list args)
{
	(void)args;
	_putchar('%');
}
