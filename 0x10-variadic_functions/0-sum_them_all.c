#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
  if (n == 0)
    return (0);
  else
  {
    int sum = 0;
    va_list arg;
    
    va_start(arg, n);
    int i;
    
    for (i = 0; i<n; i++)
    {
        sum = sum +  va_arg(arg, int);
    }
    va_end(arg);
    return sum;
  }
}