#include "main.h"

/**
*swap_int - Take two int variable
and swap thier values
*@a: first argumenet in swap_int
*@b: second argument in swap_int
*/

void swap_int(int *a, int *b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}
