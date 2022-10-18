#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
#include <stddef.h>
/*
 * _print_s - prints a string of characters
 *
 * @str: string to be printed
 *
 * Return: Void
 */
int _print_s(char *str)
{
	int n, count;

	count = 0;
	n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
		count++;
	}
	return (count);
}
