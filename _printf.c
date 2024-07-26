#include "main.h"

/**
* _printf - function that produces output according to a format.
* @format: is a character string composed of zero or more directives.
* handled conversion specifiers:
*   - c
*   - s
*   - %
*
* Return: the number of characters printed.
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, printed_chars = 0;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				i++;
				switch (format[i])
				{
					case 'c':
						c_specifier(args);
						printed_chars++;
						break;
					case 's':
						printed_chars += s_specifier(args);
						break;
					case '%':
						modulo_specifier(args);
						printed_chars++;
						break;
                    case 'd':
                        printed_chars += d_specifier(args);
                        break;
                    case 'i':
                        printed_chars += i_specifier(args);
                        break;
					default:
						_putchar('%');
						_putchar(format[i]);
						printed_chars += 2;
						break;
				}
			}
			else
			{
				_putchar(format[i]);
				printed_chars++;
			}
			i++;
		}
	}
	va_end(args);
	return (printed_chars);
}
