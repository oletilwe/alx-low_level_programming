#include "main.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

/**
* get_endianness - a function that checks the endianness.
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
uint16_t value = 1;
uint8_t *byte_ptr = (uint8_t *)&value;
return ((int)(*byte_ptr));
}
