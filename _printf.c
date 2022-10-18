#include "main.h"

/**
 * _printf - Prints a string and parameters passed into it
 * @format: The string to be printed
 * Return: The length of the string
 */
int _printf(const char *format, ...)
{
    conver_t fmt[] = {
        {"c", print_char},
        {"s", print_string},
        {"%", print_percent},
        {"d", print_integer},
        {"i", print_integer},
        {NULL, NULL}};
    int count;

    va_list spec_list;

    va_start(spec_list, format);

    count = parser(format, spec_list, fmt);

    va_end(spec_list);

    return (count);
}