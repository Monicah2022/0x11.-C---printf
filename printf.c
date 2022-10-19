#include "main.h"

/**
 * _printf - function to print to stdout
 *
 * @format: string that is passed
 *
 * Return: character to be printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int c;

	va_start(arg, format);

	c = vfprintf(stdout, format, arg);
	return (c);
}
