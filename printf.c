#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Prints output according to a format
 * @format: The defined character string
 *
 * Return: The number of characters printed excluding null byte
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;

	va_start(ap, format);
		while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
				count += putchar(va_arg(ap, int));
				break;
				case 's':
				count += print_string(va_arg(ap, char *));
				break;
				case '%':
				putchar('%');
				count++;
				break;
				default:
				putchar('%');
				putchar(*format);
				count += 2;
				break;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(ap);
	return (count);
}

