#include "main.h"
<<<<<<< HEAD

=======
void c_specifier(va_list args);
void s_specifier();
void printnoarg();
int _putchar(char c);
>>>>>>> ad0cc61d983eea0565e4997376bd74d17abe29de
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

<<<<<<< HEAD
/**
  * modulo_specifier - function to print a modulo
  * @args: input argument from the function.
  *
*/

void modulo_specifier(va_list args)
{
	(void)args;
	_putchar('%');
=======
void printnoarg()
{
     _putchar('%');
>>>>>>> ad0cc61d983eea0565e4997376bd74d17abe29de
}

