#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
	char *str1, *str2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("print character %c and %c\n", 'a', '%');
	printf("print character %c and %c\n", 'a', '%');

	str1 = "Newton";
	str2 = "abel";
	_printf("print string %s and %s\n", str1, str2);
	printf("print string %s and %s\n", str1, str2);

	printf("Printed characters (custom): %d\n", len);
	printf("Printed characters (standard): %d\n", len2);

    return (0);
}
