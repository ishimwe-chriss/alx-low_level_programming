#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always return 0
 */
int main(void)
{
int n;
int lastn;
srand (time(0));
n = rand() - RAND_MAX / 2;
lastn - n % 10;
if (lastn > 5)
{
printif("Last digit of %i is %i and is greater than 5/n", n, lastn);
}
else if (lastn == 0)
{
printif("Last digit of %i is %i and is 0/n" n, lastn);
}
else
{
printif("Last digit of %i is %i and is less than 6 and not 0/n" n, lastn);
}
return (0);
}
