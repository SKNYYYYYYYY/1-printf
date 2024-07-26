#include "main.h"

/**
* 
*
*
*/

void print_string(va_list args)
{
	char *str  = va_arg(args, char *);

	if(str == NULL)
		_putchar("");
	else
	{
		while (str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
}
