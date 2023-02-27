#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: The string to be printed
 *
 * Return: None.
 */
void _puts(char *str)
{
    while (*str != '\0')
    {
        _putchar(*str++);
    }
    _putchar('\n');
}
