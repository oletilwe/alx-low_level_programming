#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Prints the last digit
* and whether it is greater than 5, less than 6, or 0.
* Return: always 0.
*/
int main(void)
{
srand(time(NULL));
int n = rand() % 10000;
int lastDigit = n % 10;
printf("The string Last digit of %d is ", n);
if (lastDigit > 5)
{
printf("and is greater than 5\n");
}
else if (lastDigit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
