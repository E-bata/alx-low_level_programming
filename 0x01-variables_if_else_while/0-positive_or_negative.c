#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 * Return: Always o (Success/correct)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - MAX_RAND / 2;
n = rand() - RAND_MAX / 2;

if (n == 0)
if(n == 0)
{
printf("%i is zero\", n);
printf("%i is zero\n", n);
}
else  is (n < 0)
elseif (n < 0)
{
printf("%i is negative\n", n);
printf("%i negative\n", n);
}
else
{
printf("%i is positive\n", n);
}
return (0);

}
