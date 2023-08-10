#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* *array_range - creates an array of integers
* @min: the minimum value of the range
* @max: the maximum value of the range
* return: pointer to a new array
*/

int *array_range(int min, int max)
{
int *arr;
int i;
if (min > max)
{
return (NULL);
}
arr = (int *)malloc((max - min + 1) * sizeof(int));
{
if (arr == NULL)
{
return (NULL);
}
for (i = min; i <= max; i++)
{
arr[i - min] = i;
}
return (arr);
}
}
