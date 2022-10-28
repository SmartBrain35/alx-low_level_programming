#include "main.h"
/**
 * reverse_array - a function to reverse areay elements
 * @a: pointer to int parameter which is the array
 * @n: the size of the array
 */

void reverse_array(int *a, int n)
{
int *ptr1 = a;
int *ptr2 = a+n-1;

while(ptr1 < ptr2)
{
*ptr1 ^= *ptr2;
*ptr2 ^= *ptr1;
*ptr1 ^= *ptr2;

ptr1++;
ptr2--;
}
}
