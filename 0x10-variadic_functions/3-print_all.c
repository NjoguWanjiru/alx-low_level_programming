#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything based on a format string
 * @format: list of types of arguments to be printed
 * @...: variable number of arguments to be printed
 */
void print_all(const char * const format, ...)
{
    va_list args;
    char *separator = "";
    unsigned int i = 0;

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                printf("%s%c", separator, va_arg(args, int));
                break;
            case 'i':
                printf("%s%d", separator, va_arg(args, int));
                break;
            case 'f':
                printf("%s%f", separator, va_arg(args, double));
                break;
            case 's':
                {
                    char *str = va_arg(args, char *);
                    if (str == NULL)
                        str = "(nil)";
                    printf("%s%s", separator, str);
                    break;
                }
            default:
                i++;
                continue;
        }
        separator = ", ";
        i++;
    }

    printf("\n");
    va_end(args);
}
