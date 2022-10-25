#include "main.h"

/**
* swap_int - Takes a two int
* variables and swap thier values
* @a: first argumenet in swap_int
* @b: second aegument in swap_int
*/

void swap_int(int *a, int *b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

