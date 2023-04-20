#include "variadic_functions.h"
/**
 * sum_them_all -  sum of all its parameters.
 * @n: number of argument
 *
 * Return: sum of all  number
 */

int sum_them_all(const unsigned int n, ...)
{
    if (n == 1)
        return (0);
    va_list args;
    int sum = 0;
    unsigned int i = 0;

    va_start(args, n);
    for (; i < n; i++)
    {
        sum += va_arg(args, int);
    }
    va_end(args);
    return (sum);
}
