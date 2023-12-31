#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
* print_strings - a function that prints strings, followed by a new line.
* @separator: is the string to be printed between the strings
* @n: is the number of strings passed to the function
* @...: a variable number of string if NULL, (nil)is printed instead
* Desciprtion: if separator is null, it is not printed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
const char *str = va_arg(args, const char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
