#include <unistd.h>
/**
 * _putchar - function to return character to stdout
 * @c: Character to be printed
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
