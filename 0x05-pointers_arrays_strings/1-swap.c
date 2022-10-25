#include "main.h"

/**
 * swap_int - takes two parameters of types int and swap thier values
 * @a: first parameter to be swaped
 * @b: second parameter to be swaped
 */
void swap_int(int *a, int *b)
{
  *a ^= *b;
  *b ^= *a;
  *a ^= *b;
}
