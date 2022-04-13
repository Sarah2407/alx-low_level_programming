#include "main.h"
#include <stdio.h>

/**
/**
 * _abs - return abs value
 * @n : number to check
 * Return:0 or 1
 */

int _abs(int n)
{

if (n < 0)
{
return (n * (-1));
}

else if (n == 0)
{
return (0);
}

else
{
return (n);
}

}
