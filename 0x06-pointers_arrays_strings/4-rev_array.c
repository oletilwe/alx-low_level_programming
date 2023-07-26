#include "main.h"
#include <stddef.h>

/**
* reverse_array - a function that reverses the content of an array of integers
* @n: input value
* @a: input value
*/
void reverse_array(int *a, int n)
{
int temp;
int left = 0;
int right = n - 1;
while (left < right)
{
temp = a[left];
a[left] = a[right];
a[right] = temp;
left++;
right--;
}
}
