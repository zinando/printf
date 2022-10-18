#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 *
 * _printf - recreates the printf function
 *
 * @format: string with format specifier
 *
 * Return: number of characters printed
 *
 */
int _printf(const char *format, ...)
{
	int n, count;
	char *str;
	char tmp_char;

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	n = 0;
	count = 0;

	while (format[n] != '\0')
	{
		if (format[n] == '%')
		{
			if (format[n + 1] == 'c')
			{
				tmp_char = va_arg(args, int);
				_putchar(tmp_char);
				count++;
			} else if (format[n + 1] == 's')
			{
				str = va_arg(args, char *);
				count += _print_s(str);
			} else if (format[n + 1] == '%')
			{
				_putchar(format[n + 1]);
				count++;
			}
			n += 2;
		} else
		{
			_putchar(format[n]);
			n++;
			count++;
		}
	}
	va_end(args);
	return (count);
}
