#include <main.h>

/**
 * _strcmp - function to compare two steings
 * @s1: a pinter to char as the first parameter
 * @s2: a pinter to char as the second parameter
 * @return: returns int depending on whether the two string are the same, less than or greater each other and vice vesar
 */

int _strcmp(char *s1, char *s2)
{
if(s1 == s2)
    return 0;	
return (*s1 - *s2);	
}
